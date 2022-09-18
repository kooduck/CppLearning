# CppLearning

## static

- class/struct 外的static
在class/struct外的static意味着链接过程中，该变量仅对它所在的文件可见

- class/struct 中的static
该变量在该class的所有实例共享，
也即意味着在所有的实例中，该变量的内存是共享的（所有实例中 static变量只有一个实例）