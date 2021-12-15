
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class DanhSach<ArrayList> {
    private ArrayList danhSach;

    public DanhSach() {
        this.danhSach = new ArrayList<SinhVien>(); //khai báo danh sách sinh viên
    }
    public DanhSach(ArrayList danhSach) {
        this.danhSach = danhSach;
    }

    public void themSinhVien(SinhVien sv) {
        this.danhSach.add(sv);
    }

    public void inDanhSach() {
        for (SinhVien sinhVien : danhSach) {
            System.out.println(sinhVien);
        }
    }

    public boolean checkDanhSach() {
        return this.danhSach.isEmpty();
    }

    public int takeSinhVien() {
        return this.danhSach.size();
    }

}
