def FlagsForFile(filename, **kwargs):
    return {
        'flags': [
            '-x', 'c',  # 指定C语言
            '-Wall',     # 开启所有警告
            '-Wextra',   # 开启额外警告
            '-I', '/path/to/include',  # 包含头文件目录
        ],
    }


