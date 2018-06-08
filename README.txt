Đồ án crack
Đồ án 3 Kiến trúc máy tính hợp ngữ K16-HCMUS
-------------------------------------------------------------------------------------------
1. Bao gồm:
04.rar: Đề 4 (chứa 3 crackme)
1_1.exe, 2_1.exe, 2_2.exe: keygen
1_1.cpp, 2_1.cpp, 2_2.cpp: source code của keygen

2. Hướng dẫn:
# 1_1
Reg name .> string K
Reg code .> 4*K.length

# 2_1
Dùng cmd chạy: 
set r=o
set o=t
set llo=he
set t=y
set h=u
set j=w
set he=llo
echo "%o%%llo%%he%%h%%t%%windir%billgates..2006" 
"Password" là kết quả trả về

# 2_2
Nhập vào Firstname: yêu cầu string Firstname: (1) tối thiểu 4 kí tự, (2) chứa kí tự đặc biệt 'a', 'o', 'e', 'u', 'i' (thường/hoa)
Nhập vào SerialNr: yêu cầu int SerialNr: (1) khác 0, (2) thỏa thuật toán phát sinh key (*)
Thuật toán phát sinh key (*) như sau:
1-duyệt string Firstname, tìm vị trí đầu tiên xuất hiện các kí tự đặc biệt
2-với mỗi kí tự đặc biệt, có const int a, const int b
3-kết quả: Firstname.length * a + b
4-so khớp SerialNr = Firstname.length * a + b ?

(*) Xem source code để hiểu rõ cách phát sinh key của mỗi crachme.
