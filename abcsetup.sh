#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 2xx" 1>&2
  exit 1
fi

# if ! [[ "$1" =~ ^[1-9][0-9]{,2}$ ]]; then
#   echo "Usage: $0 2xx (x=[0-9])" 1>&2
#   exit 1
# fi

# if [ ! -e abc ]; then
#   echo "Error: directory 'abc' not exists." 1>&2
#   exit 1
# fi

mkdir -p submissions/abc/abc$1
echo "CREATE submissions/abc/abc$1"

cp -i templates/cpp/template.cpp submissions/abc/abc$1/a.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/b.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/c.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/d.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/e.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/f.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/g.cpp
cp -i templates/cpp/template.cpp submissions/abc/abc$1/h.cpp

exit 0