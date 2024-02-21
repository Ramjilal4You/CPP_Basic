// Since dynamic scoping is very uncommon in the familiar languages, 
// we consider the following pseudo code as our example. 
// It prints 20 in a language that uses dynamic scoping. 

//# A perl code to demonstrate dynamic scoping
//$x = 10;
//sub f
//{
//return $x;
//}
//sub g
//{
//local $x = 20; # Since local is used, x uses dynamic scoping.
//
//return f();
//}
//print g()."\n";
