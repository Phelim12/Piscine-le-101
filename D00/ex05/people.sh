ldapsearch -QLLL "uid=*" cn | sed -n '/cn: /p' | sed 's/cn: //g' | sort -r -f
