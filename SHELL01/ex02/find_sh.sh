#find . -type f -iname "*.sh" -exec basename {} .sh ';'
find . -iname '*.sh' -exec basename -s '.sh' {} \;
