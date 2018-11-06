set ruler
set nocompatible
set nu
set rnu
set laststatus=2
" This shows what you are typing as a command.  I love this!
set showcmd

" size of a hard tabstop
set tabstop=2
"
" " always uses spaces instead of tab characters
set expandtab
"
" size of an "indent"
set shiftwidth=2

call plug#begin('~/.vim/plugged')
" Make sure you use single quotes

" A light and configurable statusline/tabline plugin for Vim
Plug 'itchyny/lightline.vim'

" Multiple Cursors in VIM
Plug 'terryma/vim-multiple-cursors'

" Surround
Plug 'tpope/vim-surround'

" Plugin outside ~/.vim/plugged with post-update hook
Plug 'junegunn/fzf', { 'dir': '~/.fzf', 'do': './install --all' }
Plug 'junegunn/fzf.vim'

" Color schemes
" Plug 'flazz/vim-colorschemes'
Plug 'rafi/awesome-vim-colorschemes'

" A collection of language packs for Vim.
Plug 'sheerun/vim-polyglot'

" Initialize plugin system
call plug#end()

" Short Mapping
" Open FZF Files
map ; :Files<CR>

set background=dark " for the dark version
colorscheme one

