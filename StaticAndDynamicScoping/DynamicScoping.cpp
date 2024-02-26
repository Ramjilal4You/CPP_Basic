//###  A perl code to demonstrate dynamic scoping  ###
//
//# Compiler first searches the current block->successively all the calling functions.
//# Dynamic scoping does not care about how the code is written, but instead how it executes
//# Each time a new function is executed, a new scope is pushed onto the stack.
//# Example Perl.
//
//# Since dynamic scoping is very uncommon in the familiar languages,
//
//$x = 10;    # global variable
//
//sub f
//{
//    return $x;
//}
//
//sub g
//{
//    #local $x = 20; # Since local is used, x uses dynamic scoping.
//    return f();
//}
//
//sub h
//{
//    #local $x = 15;
//    return g();
//}
//
//print h()."\n";
//
