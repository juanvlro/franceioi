let n = read_int() in
let m = read_int() in

print_int n;
print_string " et ";
print_int m;
print_string " sont ";

if n == m then
   begin
   print_string "égaux";
   end
else
   begin
   print_string "différents";
   end
;
