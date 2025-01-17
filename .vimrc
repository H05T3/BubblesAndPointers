set number
set autoindent
set tabstop=2
set expandtab

"quick compiling and running c"
command Cc !gcc -g % -o %<
command Rc !./%<
