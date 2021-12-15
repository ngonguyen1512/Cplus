
public class SinhVien implements Comparable<SinhVien>{
    private String maSv;
    private String ho;
    private String ten;
    private String namSinh;
    private String gioiTinh;
    private Float diemTB;

    public SinhVien(String maSv, String ho, String ten, String namSinh, String gioiTinh, Float diemTB) {
        this.maSv = maSv;
        this.ho = ho;
        this.ten = ten;
        this.namSinh = namSinh;
        this.gioiTinh = gioiTinh;
        this.diemTB = diemTB;
    }
    public String getMaSv() {
        return maSv;
    }
    public void setMaSv(String maSv) {
        this.maSv = maSv;
    }
    public String getHo() {
        return ho;
    }
    public void setHo(String ho) {
        this.ho = ho;
    }
    public String getTen() {
        return ten;
    }
    public void setTen(String ten) {
        this.ten = ten;
    }
    public String getNamSinh() {
        return namSinh;
    }
    public void setNamSinh(String namSinh) {
        this.namSinh = namSinh;
    }
    public String getGioiTinh() {
        return gioiTinh;
    }
    public void setGioiTinh(String gioiTinh) {
        this.gioiTinh = gioiTinh;
    }
    public float getDiemTB() {
        return diemTB;
    }
    public void setDiemTB(float diemTB) {
        this.diemTB = diemTB;
    }

    @Override
    public String toString() {
        return "SinhVien{" +
                "maSv='" + maSv + '\'' +
                ", ho='" + ho + '\'' +
                ", ten='" + ten + '\'' +
                ", namSinh='" + namSinh + '\'' +
                ", gioiTinh='" + gioiTinh + '\'' +
                ", diemTB=" + diemTB +
                '}';
    }

    @Override
    public int compareTo(SinhVien o) {
        return this.maSv.compareTo(o.maSv);
    }
}
