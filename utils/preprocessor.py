import re
import os
import sys


def merge_files(files):
    merged_data = ""
    for file in files:
        with open(file, 'r') as fp:
            merged_data += fp.read()
    return merged_data


def remove_includes(data):
    sys_inc_re = re.compile(r'#include\s+<(.*)>')
    sys_inc = set(sys_inc_re.findall(data))
    data = sys_inc_re.sub('', data)

    local_inc_re = re.compile(r'#include\s+"(.*)"')
    local_inc = set(local_inc_re.findall(data))
    data = local_inc_re.sub('', data)

    ifndef_re = re.compile(r'#ifndef ([A-Z][A-Z0-9_]*?_H_)')
    ifndefs = set(ifndef_re.findall(data))

    for ifndef in ifndefs:
        ifn_re = re.compile(r'.*{}.*'.format(ifndef))
        data = ifn_re.sub('', data)

    headers = ''
    for inc in sys_inc:
        headers += '#include <{}>\n'.format(inc)
    data = headers + data

    new_lines_re = re.compile(r'\n\n\n+')
    data = new_lines_re.sub('\n\n', data)
    return data


def main():
    processing_files = sys.argv[1:]
    cpp_files = list(filter(lambda x: x[-4:] == '.cpp', processing_files))
    header_files = list(filter(lambda x: x[-2:] == '.h', processing_files))

    # Move main.cpp to the end
    for cpp in list(cpp_files):
        if os.path.basename(cpp) == 'main.cpp':
            cpp_files.remove(cpp)
            cpp_files.insert(0, cpp)

    merged_data = merge_files(header_files) + merge_files(cpp_files)
    merged_data = remove_includes(merged_data)
    print(merged_data)

if __name__ == '__main__':
    main()
