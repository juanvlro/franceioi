let read_int() = Scanf.scanf " %d" (fun x -> x);;

let n = read_int() in

if n >= 0
   then print_int n
   else print_int (-n)
;
