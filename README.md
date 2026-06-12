# Arduino ile Otomatik Bitki Sulama Sistemi

Bu proje, toprak nem seviyesini anlık olarak izleyerek bitkilerin doğru zamanda ve ihtiyaç duydukları miktarda sulanmasını sağlayan, sensör tabanlı bir otomatik otomasyon sistemidir. Proje, insan faktöründen kaynaklanan aşırı sulama veya kuruma gibi problemlerin önüne geçmek amacıyla geliştirilmiştir.

## 🚀 Özellikler
* **Anlık Nem Takibi:** Toprak nem sensörü aracılığıyla toprağın kuruluk durumu sürekli olarak analiz edilir.
* **Otomatik Kontrol:** Toprak nem oranı belirlenen kritik eşik değerinin (**%7**) altına düştüğünde su pompası otomatik olarak devreye girer.
* **Kullanıcı Arayüzü:** Anlık nem yüzdesi ve pompanın çalışma durumu (SULANIYOR / BEKLEMEDE) 16x2 LCD ekran üzerinde dinamik olarak gösterilir.

https://github.com/user-attachments/assets/6ff08b0a-5d70-4ad0-81f1-dc5065ceb75d


* **İzole Güç Yönetimi:** Yüksek akım çeken su pompasının mikrodenetleyiciye zarar vermemesi için röle modülü ile güvenli anahtarlama yapılmıştır.





## 🛠️ Kullanılan Donanım Bileşenleri
* Arduino Uno (ATmega328P)
* Toprak Nem Sensörü (Soil Moisture Sensor)
* 5V Röle Modülü
* 16x2 LCD Ekran & 10K Potansiyometre (Kontrast ayarı için)
* Mini Dalgıç Su Pompası ve Akvaryum Hortumu
* 9V Pil (Harici Güç Kaynağı)
* Orta Boy Breadboard ve Jumper Kablolar

## 📊 Devre Bağlantı Şeması
* **LCD Ekran Pinleri:** RS -> D12, E -> D11, D4 -> D5, D5 -> D4, D6 -> D3, D7 -> D2
* **Röle Modülü:** IN (Sinyal) -> D13
* **Toprak Nem Sensörü:** AO (Analog Çıkış) -> A0

## 🔧 Kurulum ve Çalıştırma
1. Bu depoyu (repository) bilgisayarınıza indirin.
2. `Akilli_Sulama_Sistemi.ino` dosyasını **Arduino IDE** programı ile açın.
3. Arduino Uno kartınızı bilgisayarınıza bağlayın.
4. IDE üzerinden doğru port ve kart seçimini yaptıktan sonra kodu kartınıza yükleyin.
5. Kullandığınız sensörün yapısına göre `dryValue` (kuru değer) ve `wetValue` (ıslak değer) kalibrasyon ayarlarını güncelleyebilirsiniz.

## 🔮 Gelecek Planları (Geliştirmeler)
* Sisteme **ESP8266 Wi-Fi modülü** entegre ederek verileri bulut (cloud) ortamına taşımak ve IoT tabanlı hale getirmek.
* Mobil bir arayüz geliştirerek bitki durumunu uzaktan anlık olarak izlemek.
* Su rezervuarı için bir sıvı seviye sensörü ekleyerek depo boşaldığında uyarı sistemi oluşturmak.
