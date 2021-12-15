import java.util.Scanner;

public class Test {
    private static Object sv;

    public static void  main(String[] args) {
        Scanner sc = new Scanner(System.in);
        DanhSach dssv = new DanhSach();
        int luachon = 0;
        do {
            System.out.println("=====Menu====");
            System.out.println(
                    "1.Thêm danh sách sinh viên.\n"
                    +"2.In danh sách sinh viên.\n"
                    +"3.Kiểm tra danh sách sinh viên.\n"
                    +"4.Số lượng sinh viên.\n"
            );
            System.out.print("Nhập lựa chọn: ");
            luachon = sc.nextInt();
            sc.nextLine();
            if(luachon == 1) {
                System.out.print("Nhập mã sinh viên: "); String maSv = sc.nextLine();
                System.out.print("Nhập họ: "); String ho = sc.nextLine();
                System.out.print("Nhập tên: "); String ten = sc.nextLine();
                System.out.print("Nhập ngày sinh: "); String namSinh = sc.nextLine();
                System.out.print("Nhập giới tính: "); String gioTinh = sc.nextLine();
                System.out.print("Nhập điểm trung bình: "); Float diemTB = sc.nextFloat();
                dssv.themSinhVien((SinhVien) sv);
            } else if(luachon == 2) {
                dssv.inDanhSach();
            }
            if(luachon == 3) {
                System.out.println("Kiểm tra danh sách rỗng: "+dssv.checkDanhSach());
            } else if(luachon == 4) {
                System.out.println("Lấy số lượng sinh viên: " + dssv.takeSinhVien());
            }
        } while (luachon != 0);
    }
}
