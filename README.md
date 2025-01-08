# QueueHandleManager

QueueHandleManager, birden fazla kuyruğu dinamik olarak uygulamak ve yönetmek için bağlı liste yapısını kullanan bir C tabanlı projedir. Her kuyruk, bir tutacak (handle) aracılığıyla yönetilir ve bu sayede birden fazla kuyruğun bağımsız olarak oluşturulması, değiştirilmesi ve yok edilmesi mümkündür.

## Özellikler
- **Kuyruk Yönetimi**: Kuyruk oluşturma, yok etme, eleman ekleme (enqueue) ve çıkarma (dequeue) işlemleri.
- **Bağımsız Kuyruklar**: Aynı anda birden fazla kuyruğu bağımsız olarak yönetebilme.
- **Rastgele Veri Ekleme**: Kuyruklara rastgele oluşturulan değerler ekleme.
- **Dinamik Hafıza Yönetimi**: Dinamik olarak oluşturulan kuyrukların belleğini doğru bir şekilde yönetir.

## Proje Yapısı
Bu proje aşağıdaki dosyalardan oluşur:

- **`Queue_Handle.c`**: Kuyruk işlemlerini test etmek için kullanılan ana dosya.
- **`Queue.h`**: Kuyruk işlemleri için gerekli veri yapısı tanımları ve fonksiyon prototiplerini içerir.
- **`Queue.c`**: Kuyruk işlemlerinin (enqueue, dequeue, display vb.) uygulamasını içerir.

## Kullanım Notları
- Her kuyruk **`CreateQueue()`** fonksiyonu ile oluşturulmalıdır.
- Kuyruk artık kullanılmayacaksa, belleğin doğru bir şekilde yönetilmesi için mutlaka **`destroyQueue()`** fonksiyonu çağrılmalıdır.
- Eğer **`destroyQueue()`** fonksiyonu çağrılmazsa, dinamik bellek sızıntısı (memory leak) oluşabilir.

### Örnek Çıktı

Queue 1: Adding random elements...  
Enqueued <span style="color:blue">78</span> to Queue 1  
Enqueued <span style="color:green">45</span> to Queue 1  
Enqueued <span style="color:red">12</span> to Queue 1  
Enqueued <span style="color:purple">89</span> to Queue 1  
Enqueued <span style="color:orange">34</span> to Queue 1  
Enqueued <span style="color:blue">92</span> to Queue 1  
Enqueued <span style="color:green">56</span> to Queue 1  
Enqueued <span style="color:red">19</span> to Queue 1  
Enqueued <span style="color:purple">83</span> to Queue 1  
Enqueued <span style="color:orange">61</span> to Queue 1  

Queue 1 after enqueue operations:  
Queue: <span style="color:blue">78</span> <span style="color:green">45</span> <span style="color:red">12</span> <span style="color:purple">89</span> <span style="color:orange">34</span> <span style="color:blue">92</span> <span style="color:green">56</span> <span style="color:red">19</span> <span style="color:purple">83</span> <span style="color:orange">61</span>  

Queue 2: Adding random elements...  
Enqueued <span style="color:blue">22</span> to Queue 2  
Enqueued <span style="color:green">47</span> to Queue 2  
Enqueued <span style="color:red">38</span> to Queue 2  
Enqueued <span style="color:purple">94</span> to Queue 2  
Enqueued <span style="color:orange">71</span> to Queue 2  
Enqueued <span style="color:blue">55</span> to Queue 2  
Enqueued <span style="color:green">36</span> to Queue 2  
Enqueued <span style="color:red">10</span> to Queue 2  
Enqueued <span style="color:purple">82</span> to Queue 2  
Enqueued <span style="color:orange">99</span> to Queue 2  

Queue 2 after enqueue operations:  
Queue: <span style="color:blue">22</span> <span style="color:green">47</span> <span style="color:red">38</span> <span style="color:purple">94</span> <span style="color:orange">71</span> <span style="color:blue">55</span> <span style="color:green">36</span> <span style="color:red">10</span> <span style="color:purple">82</span> <span style="color:orange">99</span>  

All queues have been destroyed. Exiting program.

