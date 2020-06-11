#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "Ana Menü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "Ayarlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES_TAB,
   "Sık Kullanılanlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_TAB,
   "Geçmiş"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_IMAGES_TAB,
   "Görüntüler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MUSIC_TAB,
   "Müzikler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEOS_TAB,
   "Videolar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "İçeriği İçe Aktar"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "Hızlı Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "İlgili tüm oyun içi ayarlara hızlıca erişin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST,
   "Çekirdek Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST,
   "Kullanılacak çekirdeği seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_LIST,
   "İçerik Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_LIST,
   "Hangi içeriğin başlatılacağını seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_DISC,
   "Disk Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_DISC,
   "Fiziksel ortam diski yükleyin. Öncelikle diskle kullanmayı düşündüğünüz çekirdeği (Çekirdek Yükle) seçmelisiniz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMP_DISC,
   "Diskten Aktar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMP_DISC,
   "Fiziksel ortam diskini dahili depolamaya aktar. Bir kalıp dosyası olarak kaydedilecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "Veritabanına uyan taranmış içerikler burada görünecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "İçeriği Tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_CONTENT_LIST,
   "İçeriği tara ve veritabanına ekle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_WIMP,
   "Masaüstü Menüsünü Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_WIMP,
   "Kapalıysa masaüstü menüsünü açar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DISABLE_KIOSK_MODE,
   "Kiosk Kipini Devre Dışı Bırak"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DISABLE_KIOSK_MODE,
   "Kiosk kipini devre dışı bırak. Değişikliğin tam etkili olması için yeniden başlatma gerekir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE_UPDATER,
   "Çevrimiçi Güncelleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "RetroArch için eklentiler, bileşenler ve içerikler indir."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY,
   "Netplay oturumun kur veya katıl."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS,
   "Ayarlar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS,
   "Programı yapılandır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION_LIST,
   "Bilgi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION_LIST_LIST,
   "Sistem bilgisini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS_LIST,
   "Yapılandırma Dosyası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS_LIST,
   "Yapılandırma dosyalarını yönet ve oluştur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LIST,
   "Yardım"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_LIST,
   "Programın nasıl çalıştığı hakkında daha fazla bilgi edinin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_RETROARCH,
   "RetroArch'ı Yeniden Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_RETROARCH,
   "Programı yeniden başlat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "RetroArch'dan Çık"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "Programdan çık."
   )

/* Main Menu > Load Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE,
   "Bir Çekirdek İndir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE,
   "Çevrimiçi güncelleyici üstünden çekirdek indir ve kur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_LIST,
   "Kur yada Bir Çekirdeği Geri Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SIDELOAD_CORE_LIST,
   "İndirilen dizinden bir çekirdek kur ya da geri yükle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_VIDEO_PROCESSOR,
   "Video İşlemcisini Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_NET_RETROPAD,
   "Uzak RetroPad Bağlantısını Başlat"
   )

/* Main Menu > Load Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES,
   "Başlangıç Dizini"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOADED_FILE_DETECT_CORE_LIST,
   "İndirilenler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPEN_ARCHIVE,
   "Arşive Gözat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_ARCHIVE,
   "Arşivi Yükle"
   )

/* Main Menu > Load Content > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_FAVORITES,
   "Sık Kullanılanlar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_FAVORITES,
   "'Sık Kullanılanlara' eklediğiniz içerik burada görünecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_MUSIC,
   "Müzik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_MUSIC,
   "Daha önce çalınan müzik burada görünecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_IMAGES,
   "Resim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_IMAGES,
   "Daha önce görüntülenen resimler burada görünecek."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_VIDEO,
   "Daha önce oynatılmış olan videolar burada görünecektir."
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_LIST,
   "Çekirdek İndirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_INSTALLED_CORES,
   "Kurulu Çekirdekleri Güncelle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATE_INSTALLED_CORES,
   "Kurulu tüm çekirdekleri mevcut en son sürüme güncelleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_UPDATER_LIST,
   "Küçük Resim Güncelleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_UPDATER_LIST,
   "Seçilen sistem için komple küçük resim paketini indirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PL_THUMBNAILS_UPDATER_LIST,
   "Oynatma Listesi Küçük Resim Güncelleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PL_THUMBNAILS_UPDATER_LIST,
   "Seçilen oynatma listesinin her girişi için ayrı ayrı küçük resimler indirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_CONTENT,
   "İçerik İndirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CORE_INFO_FILES,
   "Çekirdek Bilgileri Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_ASSETS,
   "İçerikleri Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_AUTOCONFIG_PROFILES,
   "Joypad Profillerini Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CHEATS,
   "Hileleri Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_DATABASES,
   "Veritabanlarını Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "Kaplamaları Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_GLSL_SHADERS,
   "GLSL Gölgelendiricilerini Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CG_SHADERS,
   "Cg Gölgelendiricilerini Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_SLANG_SHADERS,
   "Slang Gölgelendiricilerini Güncelle"
   )

/* Main Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFORMATION,
   "Çekirdek Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFORMATION,
   "Uygulama/çekirdek ilgili bilgileri görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISC_INFORMATION,
   "Disk Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISC_INFORMATION,
   "Takılan ortam diskleri hakkındaki bilgileri görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_INFORMATION,
   "Ağ Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_INFORMATION,
   "Ağ arayüzlerini ve ilgili IP adreslerini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFORMATION,
   "Sistem Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_INFORMATION,
   "Aygıta özgü bilgileri gösterir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_MANAGER,
   "Veritabanı Yöneticisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DATABASE_MANAGER,
   "Veritabanlarını görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_MANAGER,
   "İmleç Yöneticisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CURSOR_MANAGER,
   "Önceki aramaları görüntüle."
   )

/* Main Menu > Information > Core Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_NAME,
   "Çekirdek İsmi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_LABEL,
   "Çekirdek Etiketi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_NAME,
   "Sistem Adı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER,
   "Sistem Üreticisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CATEGORIES,
   "Kategoriler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_AUTHORS,
   "Yazar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_PERMISSIONS,
   "İzinler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_LICENSES,
   "Lisans"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS,
   "Desteklenen Eklentiler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_REQUIRED_HW_API,
   "Gerekli Grafik API"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_FIRMWARE,
   "Ürün Yazılımı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING,
   "Eksik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT,
   "Mevcut"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPTIONAL,
   "İsteğe bağlı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REQUIRED,
   "Gerekli"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE,
   "Çekirdeği Sil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE,
   "Bu çekirdeği diskten kaldır."
   )

/* Main Menu > Information > System Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_BUILD_DATE,
   "Oluşturulma Tarihi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GIT_VERSION,
   "Git Sürümü"
   )
MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_COMPILER,
   "Derleyici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_MODEL,
   "CPU Modeli"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_FEATURES,
   "CPU Özellikleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_ARCHITECTURE,
   "CPU Mimarisi:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_CORES,
   "CPU Çekirdekleri:"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CPU_CORES,
   "CPU'nun sahip olduğu çekirdek miktarı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_IDENTIFIER,
   "Ön Uç Tanımlayıcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_OS,
   "İşletim sistemi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RETRORATING_LEVEL,
   "RetroRating Seviyesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE,
   "Güç Kaynağı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VIDEO_CONTEXT_DRIVER,
   "Video İçerik Sürücüsü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_WIDTH,
   "Ekran Genişliği (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_HEIGHT,
   "Ekran Yüksekliği (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_DPI,
   "Ekran DPI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBRETRODB_SUPPORT,
   "LibretroDB Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OVERLAY_SUPPORT,
   "Kaplama Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COMMAND_IFACE_SUPPORT,
   "Komut Arayüzü Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_COMMAND_IFACE_SUPPORT,
   "Ağ Komutu Arayüz Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_REMOTE_SUPPORT,
   "Ağ Oyun Kolu Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COCOA_SUPPORT,
   "Cocoa Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RPNG_SUPPORT,
   "PNG (RPNG) Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RJPEG_SUPPORT,
   "JPEG (RJPEG) Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RBMP_SUPPORT,
   "BMP (RBMP) Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RTGA_SUPPORT,
   "TGA (RTGA) Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_SUPPORT,
   "SDL 1.2 Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL2_SUPPORT,
   "SDL 2 Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VULKAN_SUPPORT,
   "Vulkan Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_METAL_SUPPORT,
   "Metal Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGL_SUPPORT,
   "OpenGL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGLES_SUPPORT,
   "OpenGL ES Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_THREADING_SUPPORT,
   "Threading Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_KMS_SUPPORT,
   "KMS/EGL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_UDEV_SUPPORT,
   "udev Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENVG_SUPPORT,
   "OpenVG Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_EGL_SUPPORT,
   "EGL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_X11_SUPPORT,
   "X11 Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WAYLAND_SUPPORT,
   "Wayland Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XVIDEO_SUPPORT,
   "XVideo Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ALSA_SUPPORT,
   "ALSA Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OSS_SUPPORT,
   "OSS Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENAL_SUPPORT,
   "OpenAL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENSL_SUPPORT,
   "OpenSL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RSOUND_SUPPORT,
   "RSound Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ROARAUDIO_SUPPORT,
   "RoarAudio Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_JACK_SUPPORT,
   "JACK Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PULSEAUDIO_SUPPORT,
   "PulseAudio Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO_SUPPORT,
   "CoreAudio Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO3_SUPPORT,
   "CoreAudio V3 Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DSOUND_SUPPORT,
   "DirectSound Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WASAPI_SUPPORT,
   "WASAPI Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XAUDIO2_SUPPORT,
   "XAudio2 Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ZLIB_SUPPORT,
   "zlib Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_7ZIP_SUPPORT,
   "7zip Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYLIB_SUPPORT,
   "Dinamik Kütüphane Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYNAMIC_SUPPORT,
   "Libretro Kütüphanesinin Dinamik Çalışma Zamanı Yükleniyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CG_SUPPORT,
   "Cg Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GLSL_SUPPORT,
   "GLSL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_HLSL_SUPPORT,
   "HLSL Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_IMAGE_SUPPORT,
   "SDL Image Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FFMPEG_SUPPORT,
   "FFmpeg Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_MPV_SUPPORT,
   "mpv Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CORETEXT_SUPPORT,
   "CoreText Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FREETYPE_SUPPORT,
   "FreeType Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_STB_TRUETYPE_SUPPORT,
   "STB TrueType Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETPLAY_SUPPORT,
   "Netplay (Eşli Oynama) Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PYTHON_SUPPORT,
   "Python (Gölgelendirici Komut Dosyası Desteği) Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_V4L2_SUPPORT,
   "Video4Linux2 Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBUSB_SUPPORT,
   "libusb Desteği"
   )

/* Main Menu > Information > Database Manager */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_SELECTION,
   "Veritabanı Seçimi"
   )

/* Main Menu > Information > Database Manager > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_NAME,
   "İsim"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DESCRIPTION,
   "Açıklama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_GENRE,
   "Tür"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PUBLISHER,
   "Yayımcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DEVELOPER,
   "Geliştirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ORIGIN,
   "Köken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_FRANCHISE,
   "Seri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_TGDB_RATING,
   "TGDB Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_FAMITSU_MAGAZINE_RATING,
   "Famitsu Magazin Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_REVIEW,
   "Edge Magazin İncelemesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_RATING,
   "Edge Magazin Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Edge Magazin Sayısı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_MONTH,
   "Çıkış Tarihi Ayı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_YEAR,
   "Çıkış Tarihi Yılı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_BBFC_RATING,
   "BBFC Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ESRB_RATING,
   "ESRB Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ELSPA_RATING,
   "ELSPA Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PEGI_RATING,
   "PEGI Derecelendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ENHANCEMENT_HW,
   "Donanım Geliştirme"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CERO_RATING,
   "CERO Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SERIAL,
   "Seri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ANALOG,
   "Analog Destekli"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RUMBLE,
   "Titreşim Destekli"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_COOP,
   "Co-op Destekli"
   )

/* Main Menu > Configuration File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS,
   "Yapılandırma Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_TO_DEFAULT_CONFIG,
   "Varsayılanlara Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_TO_DEFAULT_CONFIG,
   "Mevcut yapılandırmayı varsayılan değerlere sıfırla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG,
   "Mevcut Yapılandırmayı Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_NEW_CONFIG,
   "Yeni Yapılandırmayı Kaydet"
   )

/* Main Menu > Help */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CONTROLS,
   "Temel Menü Kontrolleri"
   )

/* Main Menu > Help > Basic Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_UP,
   "Yukarı Kaydır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_DOWN,
   "Aşağı Kaydır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_CONFIRM,
   "Onayla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_INFO,
   "Bilgi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_START,
   "Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_MENU,
   "Menü Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_QUIT,
   "Çık"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_KEYBOARD,
   "Klavye Aç/Kapa"
   )

/* Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SETTINGS,
   "Sürücüler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SETTINGS,
   "Sistem tarafından kullanılan sürücüleri değiştir."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SETTINGS,
   "Video çıkış ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SETTINGS,
   "Ses"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SETTINGS,
   "Ses çıkışı ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SETTINGS,
   "Giriş"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SETTINGS,
   "Joypad, klavye ve fare ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LATENCY_SETTINGS,
   "Gecikme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LATENCY_SETTINGS,
   "Video, ses ve giriş gecikmesi ile ilgili ayarları değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SETTINGS,
   "Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SETTINGS,
   "Çekirdek ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATION_SETTINGS,
   "Yapılandırma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATION_SETTINGS,
   "Yapılandırma dosyaları için varsayılan ayarları değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVING_SETTINGS,
   "Kaydetme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVING_SETTINGS,
   "Kaydetme ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOGGING_SETTINGS,
   "Günlükler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOGGING_SETTINGS,
   "Günlük ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FILE_BROWSER_SETTINGS,
   "Dosya Tarayıcısı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FILE_BROWSER_SETTINGS,
   "Dosya tarayıcı ayarlarını düzenle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_SETTINGS,
   "Kare Sınırı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_THROTTLE_SETTINGS,
   "Geri sarma, ileri sarma ve ağır çekim ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_SETTINGS,
   "Kayıt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_SETTINGS,
   "Kayıt ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_DISPLAY_SETTINGS,
   "Ekrandaki Görünüm"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_DISPLAY_SETTINGS,
   "Ekran kaplamasını, klavye kaplamasını ve ekrandaki bildirim ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_INTERFACE_SETTINGS,
   "Kullanıcı Arayüzü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_INTERFACE_SETTINGS,
   "Kullanıcı arayüzü ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SETTINGS,
   "Çeviri Servisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SETTINGS,
   "Çeviri servisi ayarlarını değiştir (Tercüme/TTS /Çeşitli)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_SETTINGS,
   "Erişilebilirlik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_SETTINGS,
   "Erişilebilirlik ekran okuyucusu ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POWER_MANAGEMENT_SETTINGS,
   "Güç Yönetimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POWER_MANAGEMENT_SETTINGS,
   "Güç yönetimi ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETRO_ACHIEVEMENTS_SETTINGS,
   "Başarılar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RETRO_ACHIEVEMENTS_SETTINGS,
   "Başarı ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_SETTINGS,
   "Ağ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_SETTINGS,
   "Sunucu ve ağ ayarlarını yapılandır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SETTINGS,
   "Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SETTINGS,
   "Oynatma listesi ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_SETTINGS,
   "Kullanıcı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_SETTINGS,
   "Hesap, kullanıcı adı ve dil ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_SETTINGS,
   "Dizin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DIRECTORY_SETTINGS,
   "Dosyaların bulunduğu varsayılan dizinleri değiştir."
   )

/* Settings > Drivers */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DRIVER,
   "Giriş"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DRIVER,
   "Kullanılacak giriş sürücüsü. Video sürücüsüne bağlı olarak, farklı bir giriş sürücüsünü zorlayabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_DRIVER,
   "Oyun kolu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_DRIVER,
   "Kullanılacak oyun kolu sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DRIVER,
   "Kullanılacak video sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DRIVER,
   "Ses"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DRIVER,
   "Kullanılacak ses sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_DRIVER,
   "Ses Yeniden Örnekleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_DRIVER,
   "Kullanılacak yeniden ses örneklemesi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_DRIVER,
   "Kamera"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_DRIVER,
   "Kullanılacak kamera sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_DRIVER,
   "Kullanılacak WiFi sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_DRIVER,
   "Konum"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_DRIVER,
   "Kullanılacak konum sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DRIVER,
   "Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DRIVER,
   "Kullanılacak menü sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_DRIVER,
   "Kayıt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORD_DRIVER,
   "Kullanılacak kayıt sürücüsü."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_DRIVER,
   "Kullanılacak MIDI sürücüsü."
   )

/* Settings > Video */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCHRES_SETTINGS,
   "CRT Çözünürlüğü Değiştir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCHRES_SETTINGS,
   "CRT ekranlarında kullanmak için yerel, düşük çözünürlüklü sinyaller verir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OUTPUT_SETTINGS,
   "Çıkış"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OUTPUT_SETTINGS,
   "Video çıkış ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "Tam Ekran Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "Tam ekran ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_MODE_SETTINGS,
   "Pencere Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_MODE_SETTINGS,
   "Pencereli ekran ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALING_SETTINGS,
   "Ölçekleme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALING_SETTINGS,
   "Video ölçeklendirme ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Eşitleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Video eşitleme ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSPEND_SCREENSAVER_ENABLE,
   "Ekran Koruyucuyu Önle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SUSPEND_SCREENSAVER_ENABLE,
   "Sisteminizin ekran koruyucusunun aktif hale gelmesini önler."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_THREADED,
   "Gecikme ve daha fazla video takılma pahasına performansı artırır. Yalnızca tam hız elde edemiyorsanız kullanın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_BLACK_FRAME_INSERTION,
   "Siyah Kare Ekle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_BLACK_FRAME_INSERTION,
   "Karelerin arasına siyah bir çerçeve ekler. Gölgelenmeyi önlemek için 60Hz içerik oynatmak isteyen 120Hz ekranlı kullanıcılar için kullanışlıdır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_SCREENSHOT,
   "GPU ile Ekran Görüntüsü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_SCREENSHOT,
   "Varsa, GPU gölgelendirici ekran görüntüsünü kullanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SMOOTH,
   "İki Çizgili Filtreleme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SMOOTH,
   "Kenarları yumuşatmak için görüntüye hafif bir bulanıklık ekler. Bu seçeneğin performans üzerinde çok az eksi etkisi var."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DELAY,
   "Otomatik Gölgelendirici Gecikmesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DELAY,
   "Otomatik yüklenen gölgelendiricileri geciktirir (ms cinsinden). 'Ekran yakalama' yazılımını kullanırken grafiksel bozulmalar olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER,
   "Video Filtresi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER,
   "CPU ile çalışan bir video filtresi uygula.\nNOT: Yüksek performans tüketebilir. Bazı video filtreleri yalnızca 32bit veya 16bit renk kullanan çekirdekler için kullanılabilir."
   )

/* Settings > Video > CRT SwitchRes */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION,
   "CRT Çözünürlüğü Değiştir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION,
   "Sadece CRT görüntüler için. Çekirdek/Oyun çözünürlüğü ve yenileme hızı kullanmaya çalışır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_SUPER,
   "CRT Süper Çözünürlük"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_SUPER,
   "Doğal ve ultrageniş süper çözünürlükler arasında geçiş yapın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_X_AXIS_CENTERING,
   "X-Yönünde Merkezleme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_X_AXIS_CENTERING,
   "Görüntü ekranda doğru şekilde ortalanmamışsa bu seçenekler arasında gezinin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "Özel Yenileme Hızı Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "Gerekirse, yapılandırma dosyasında belirtilen özel bir yenileme hızı kullanın."
   )

/* Settings > Video > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MONITOR_INDEX,
   "Monitör İndeksi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MONITOR_INDEX,
   "Hangi ekranın kullanılacağını seçer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION,
   "Videoyu Döndür"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ROTATION,
   "Videonun belirli bir dönüşünü zorlar. Dönme, çekirdeğin ayarladığı dönüşlere eklenir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_ORIENTATION,
   "Ekran Yönü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREEN_ORIENTATION,
   "İşletim sisteminden ekranın belirli bir yönünü zorlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_INDEX,
   "GPU İndeksi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE,
   "Dikey Yenileme Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE,
   "Ekranınızın dikey yenileme hızıdır. Uygun bir ses giriş oranını hesaplamak için kullanılır.\nNOT: 'Threaded Video' etkinse bu yok sayılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_AUTO,
   "Tahmini Ekran Yenileme Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_AUTO,
   "Ekranın Hz cinsinden yenileme hızı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_POLLED,
   "Ekranın Belirlenen Yenileme Hızını Ayarla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_POLLED,
   "Ekran sürücüsü tarafından bildirilen yenileme hızı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_SRGB_DISABLE,
   "sRGB FBO Zorla Devre Dışı Bırak"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FORCE_SRGB_DISABLE,
   "SRGB FBO desteğini zorla devre dışı bırakır. Windows'taki bazı Intel OpenGL sürücüleri, eğer etkinse, sRGB FBO desteğiyle ilgili video sorunları yaşayabilir. Bunu etkinleştirmek, bu durumu çözebilir."
   )

/* Settings > Video > Fullscreen Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN,
   "Tam Ekran Modunda Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN,
   "Tam ekranda başlar. Çalışırken zamanında değiştirilebilir. Komut satırı tarafından geçersiz kılınabilir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_FULLSCREEN,
   "Pencereli Tam Ekran Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_FULLSCREEN,
   "Tam ekran ise, pencereli bir tam ekran kipini tercih et."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_X,
   "Tam Ekran Genişliği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_X,
   "Penceresiz tam ekran kipi için özel genişlik boyutunu ayarla. Bunu ayarsız bırakırsanız masaüstü çözünürlüğünü kullanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_Y,
   "Tam Ekran Yüksekliği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_Y,
   "Penceresiz tam ekran kipi için özel yükseklik boyutunu ayarla. Bunu ayarsız bırakırsanız masaüstü çözünürlüğünü kullanır."
   )

/* Settings > Video > Windowed Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE,
   "Ölçekli Pencere"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SCALE,
   "Pencere boyutunu çekirdek görünüm alanı boyutuna göre ayarlar. Alternatif olarak, sabit bir pencere boyutu için bir pencere genişliğini ve yüksekliğini ayarlayabilirsiniz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OPACITY,
   "Pencere Şeffaflığı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SHOW_DECORATIONS,
   "Pencere Süslemelerini Göster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SAVE_POSITION,
   "Pencere Konumunu ve Boyutunu Hatırla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SAVE_POSITION,
   "Pencere boyutunu ve konumunu hatırla, Pencereli ölçekten öncelikli olmasını sağlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_WIDTH,
   "Pencere Genişliği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_WIDTH,
   "Ekran penceresi için özel genişliği ayarlayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_HEIGHT,
   "Pencere Yüksekliği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_HEIGHT,
   "Ekran penceresi için özel yüksekliği ayarlayın."
   )

/* Settings > Video > Scaling */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER,
   "Tam Sayı Ölçeği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER,
   "Videoyu yalnızca tamsayı adımlarla ölçeklendirir. Temel boyut, sistem tarafından bildirilen geometriye ve en/boy oranına bağlıdır. 'En/Boy Oranını Zorla' ayarlanmazsa, X/Y birbirlerinden bağımsız, tamsayı katlarıyla ölçeklendirilirler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_INDEX,
   "En Boy Oranı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO,
   "Özel En Boy Oranı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ASPECT_RATIO,
   "En boy oranı 'Yapılandırma' olarak ayarlanmışsa, video boy oranı için kayan nokta değeri (genişlik / yükseklik)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_X,
   "Özel En Boy Oranı (X Konumu)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_X,
   "Özel görünüm alanı ofseti, görünümün X ekseni konumunu tanımlamak için kullanılır. 'Tamsayı Ölçeği' etkinse bunlar dikkate alınmaz. Daha sonra otomatik olarak ortalanacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_Y,
   "Özel En Boy Oranı (Y Konumu)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_Y,
   "Özel görünüm alanı ofseti, görünümün Y ekseni konumunu tanımlamak için kullanılır. 'Tamsayı Ölçeği' etkinse bunlar dikkate alınmaz. Daha sonra otomatik olarak ortalanacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "Özel En Boy Oranı (Genişlik)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "En Boy Oranı 'Özel' olarak ayarlanmışsa kullanılan özel görünüm genişliği."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "Özel En Boy Oranı (Yükseklik)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "En Boy Oranı 'Özel' olarak ayarlandıysa kullanılan özel görünüm yüksekliği."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CROP_OVERSCAN,
   "Aşırı Taramayı Kırp (Yenileme gerekir)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CROP_OVERSCAN,
   "Görüntünün kenarları etrafındaki birkaç pikseli, bazen de çöp pikselleri de içeren geliştiriciler tarafından geleneksel olarak boş bırakılır."
   )

/* Settings > Video > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VSYNC,
   "Dikey Eşitleme (Vsync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VSYNC,
   "Grafik kartının çıkış videosunu ekranın yenileme hızıyla eşitler. Tavsiye edilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SWAP_INTERVAL,
   "Dikey Eşitleyici (Vsync) Değişme Aralığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SWAP_INTERVAL,
   " Vsync için özel bir takas aralığı kullanır. Monitör yenileme hızını etkili bir şekilde yarıya indirmek için bunu ayarla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ADAPTIVE_VSYNC,
   "Uyarlamalı Vsync"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ADAPTIVE_VSYNC,
   "Dikey eşitleme, performans hedef yenileme hızının altına düşene kadar etkinleştirilir.\nBu, performansın gerçek zamanın altına düştüğünde tıkanıklığı en aza indirebilir ve daha fazla enerji tasarrufu sağlayabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY,
   "Kare Gecikmesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FRAME_DELAY,
   "Daha fazla video takılma riski pahasına gecikmeyi azaltır. V-Sync'ten sonra gecikme ekler (ms cinsinden)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC,
   "Katı GPU Dikey Eşitleme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC,
   "CPU ve GPU’yu sabit olarak eşitle. Performanstan ödün vererek gecikmeyi azaltır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC_FRAMES,
   "Katı GPU Dikey Eşitleme Kareleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC_FRAMES,
   "'Sabit GPU Eşitleyici' kullanılırken CPU'nun GPU'dan kaç kare çalıştırabileceğini ayarlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VRR_RUNLOOP_ENABLE,
   "Tam İçerik Kare Hızına Eşitle (G-Sync, FreeSync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VRR_RUNLOOP_ENABLE,
   "Çekirdekten sapmama zamanlaması istenir. Değişken Yenileme Hızına sahip ekranlar, G-Sync ve FreeSync için kullanın."
   )

/* Settings > Audio */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_SETTINGS,
   "Çıkış"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_SETTINGS,
   "Ses çıkışı ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_SETTINGS,
   "Yeniden örnekleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_SETTINGS,
   "Ses örnekleyici ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Senkronizasyon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Ses eşitleme ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_SETTINGS,
   "MIDI ayarlarını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_SETTINGS,
   "Mikser"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_SETTINGS,
   "Ses karıştırıcı ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUNDS,
   "Menü Sesleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MUTE,
   "Sustur"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MUTE,
   "Sesi aç/kapa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_MUTE,
   "Mixer'i Sustur"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_MUTE,
   "Mikser sesini kapatın/açın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FASTFORWARD_MUTE,
   "Hızlı İletirken Sessiz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FASTFORWARD_MUTE,
   "Hızlı ileri sarma kullanırken sesi otomatik olarak sessize alır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_VOLUME,
   "Ses Artışı (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_VOLUME,
   "Ses seviyesi (dB cinsinden). 0 dB normal hacimdir ve kazanç uygulanmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_VOLUME,
   "Mikser Ses Kazancı (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_VOLUME,
   "Global ses karıştırıcı sesi (dB cinsinden). 0 dB normal hacimdir ve arttırma uygulanmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN,
   "DSP Eklentisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN,
   "Sürücüye gönderilmeden önce sesi işleyen DSP ses eklentisi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "WASAPI Ayrıcalıklı Kip"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "WASAPI sürücüsünün ses cihazının kontrolünü tamamen ele geçirmesine izin verin. Devre dışı bırakılırsa, bunun yerine paylaşılan modu kullanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_FLOAT_FORMAT,
   "WASAPI Float Biçimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_FLOAT_FORMAT,
   "Ses cihazınız tarafından destekleniyorsa, WASAPI sürücüsü için kayan nokta biçimini kullanın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "WASAPI Paylaşılan Arabellek Uzunluğu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "WASAPI sürücüsünü paylaşılan modda kullanırken ara arabellek uzunluğu (karelerde)."
   )

/* Settings > Audio > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE,
   "Ses"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE,
   "Sesin verilip verilmediğini belirler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DEVICE,
   "Aygıt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DEVICE,
   "Ses sürücüsünün kullandığı varsayılan ses cihazının üzerine yaz. Bu işlem sürücüye bağlıdır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_LATENCY,
   "Ses Gecikmesi (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_LATENCY,
   "Milisaniye cinsinden istenen ses gecikmesi. Ses sürücüsü verilen gecikmeyi sağlayamıyorsa onur duyulmayabilir."
   )

/* Settings > Audio > Resampler */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_QUALITY,
   "Örnekleyici Kalitesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_QUALITY,
   "Performans/düşük gecikme süresi için düşük gecikme süresi için bu değeri düşürün, düşük performans/düşük gecikme pahasına daha iyi ses kalitesi istiyorsanız, artırın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_RATE,
   "Çıkış Oranı (Hz)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_RATE,
   "Ses çıkışı örnekleme hızı."
   )

/* Settings > Audio > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNC,
   "Eşitleyici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNC,
   "Sesi eşitle. Tavsiye edilen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MAX_TIMING_SKEW,
   "Azami Zamanlama Eğimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MAX_TIMING_SKEW,
   "Ses giriş hızındaki azami değişiklik. Bunun artırılması, yanlış bir ses perdesi pahasına zamanlamada çok büyük değişiklikler yapılmasını sağlar (örneğin, NTSC ekranlarında PAL çekirdeği çalıştırma)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RATE_CONTROL_DELTA,
   "Dinamik Ses Hızı Kontrolü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RATE_CONTROL_DELTA,
   "Ses ve videoyu senkronize ederken zamanlamadaki kusurların düzeltilmesine yardımcı olur. Devre dışı bırakılmışsa, uygun senkronizasyonun elde edilmesinin neredeyse imkansız olduğunu unutmayın."
   )

/* Settings > Audio > MIDI */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_INPUT,
   "Giriş"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_INPUT,
   "Giriş cihazı seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_OUTPUT,
   "Çıkış"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_OUTPUT,
   "Çıkış cihazı seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_VOLUME,
   "Ses"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_VOLUME,
   "Çıkış sesini ayarla (%)."
   )

/* Settings > Audio > Mixer Settings > Mixer Stream */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY,
   "Oynat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY,
   "Ses akışının oynatılmasını başlatır. Tamamlandığında, mevcut ses akışını bellekten kaldıracak."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_LOOPED,
   "Oynat (Döngüsel)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_LOOPED,
   "Ses akışının oynatılmasını başlatır. Tamamlandığında, tekrar baştan başlayıp tekrar çalmaya başlayacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_SEQUENTIAL,
   "Oynat (Ardışık)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_SEQUENTIAL,
   "Ses akışının oynatılmasını başlatır. Tamamlandığında, sıralı sırayla bir sonraki ses akışına atlar ve bu davranışı tekrarlar. Albüm çalma modu olarak kullanışlıdır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_STOP,
   "Durdur"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_STOP,
   "Ses akışının çalınmasını durdurur, ancak bellekten çıkarmaz. 'Oynat' seçeneğini seçerek tekrar oynamaya başlayabilirsiniz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_REMOVE,
   "Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_REMOVE,
   "Ses akışının çalınmasını durdurur ve tamamen bellekten kaldırır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_VOLUME,
   "Ses"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_VOLUME,
   "Ses akışının sesini ayarlayın."
   )

/* Settings > Audio > Menu Sounds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE_MENU,
   "Mikser"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE_MENU,
   "Menüde bile eş zamanlı ses akışları oynat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_OK,
   "Tamam sesini etkinleştir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_CANCEL,
   "İptal Sesini Etkinleştir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_NOTICE,
   "Bildirim Sesini Etkinleştir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_BGM,
   "BGM Sesini Etkinleştir"
   )

/* Settings > Input */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MAX_USERS,
   "Azami Kullanıcı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MAX_USERS,
   "RetroArch tarafından desteklenen azami kullanıcı sayısı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR,
   "Sorgu Türü Davranışı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_POLL_TYPE_BEHAVIOR,
   "Giriş yoklama işleminin RetroArch içinde yapılmasının etkisi. 'Erken' veya 'Geç' olarak ayarlamak, yapılandırmanıza bağlı olarak daha az gecikmeyle sonuçlanabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAP_BINDS_ENABLE,
   "Bu Çekirdek Eşleşmesini Yeniden Yapılandır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAP_BINDS_ENABLE,
   "Etkinleştirilirse, giriş, geçerli çekirdek için ayarlanan yeniden birleştirilen ciltlerle geçersiz kılınır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTODETECT_ENABLE,
   "Otomatik Yapılandırma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTODETECT_ENABLE,
   "Etkinleştirildiğinde denetleyicileri(gamepadler) otomatik yapılandırmaya geçer, Tak ve Kullan stili."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BUTTON_AXIS_THRESHOLD,
   "Giriş Düğmesi Eksen Eşiği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BUTTON_AXIS_THRESHOLD,
   "Bir düğmeye basılmasıyla sonuçlanacak eksenin ne kadar uzağa eğilmesi gerektiği."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_DEADZONE,
   "Analog Ölü Bölgesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_SENSITIVITY,
   "Analog Hassasiyeti"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_TIMEOUT,
   "Bağlama Zaman Aşımı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_TIMEOUT,
   "Bir sonraki basılı tutma işlemine kadar bekleyecek saniye miktarı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_HOLD,
   "Bağlama Beklemesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_HOLD,
   "Bir girişi bağlamak için tutulan saniye miktarı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_PERIOD,
   "Turbo Aralığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_PERIOD,
   "Turbo etkin düğmelerin değiştirildiği süreyi açıklar. Sayılar çerçevelerde açıklanmıştır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DUTY_CYCLE,
   "Görev Döngüsü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DUTY_CYCLE,
   "Turbo etkin bir düğmenin ne kadar sürmesi gerektiğini belirler. Sayılar karelerde belirlenir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_MODE,
   "Turbo Modu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_MODE,
   "Turbo modunun genel davranışını seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_DEFAULT_BUTTON,
   "Varsayılan Turbo Düğmesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_DEFAULT_BUTTON,
   "Turbo Kipi için varsayılan etkin düğme 'Tek Düğme'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "Dokunsal Geribildirim/Titreşim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "Dokunsal geri bildirim ve titreşim ayarlarını değiştirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_SETTINGS,
   "Menü Kontrolleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_SETTINGS,
   "Menü kontrol ayarlarını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BINDS,
   "Kısayol Tuş Atamaları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_BINDS,
   "Kısayol tuşu ayarlarını yapılandır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_USER_BINDS,
   "Port %u Atamaları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_USER_BINDS,
   "Bu port için kontrolleri yapılandır."
   )

/* Settings > Input > Haptic Feedback/Vibration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIBRATE_ON_KEYPRESS,
   "Tuşa Basınca Titret"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLE_DEVICE_VIBRATION,
   "Cihaz Titreşimini Etkinleştir (Desteklenen Çekirdekler İçin)"
   )

/* Settings > Input > Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_UNIFIED_MENU_CONTROLS,
   "Birleşik Menü Kontrolleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_UNIFIED_MENU_CONTROLS,
   "Hem menü hem de oyun için aynı kontrolleri kullan. Klavyeye uygulanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INPUT_SWAP_OK_CANCEL,
   "Menü Tamam & İptal Düğmeleri Değişimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INPUT_SWAP_OK_CANCEL,
   "TAMAM/İptal için düğmeleri değiştirin. Devre dışı bırakılınca, Japonya düğme yönüne geçer, etkinleştirilirse Batı düğme yönüne geçer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ALL_USERS_CONTROL_MENU,
   "Tüm Kullanıcılar Menüyü Kontrol Eder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ALL_USERS_CONTROL_MENU,
   "Herhangi bir kullanıcının menüyü kontrol etmesine izin verir. Devre dışı bırakılırsa, menüyü yalnızca Kullanıcı 1 kontrol edebilir."
   )

/* Settings > Input > Hotkey Binds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_PRESS_TWICE,
   "Çıkış İçin İki Defa Bas"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_PRESS_TWICE,
   "RetroArch'tan çıkmak için çıkış kısayol tuşuna iki kez bas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "Oyun Kolu Menü Geçiş Kombinasyonu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "Geçiş menüsüne Gamepad düğme kombinasyonu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_KEY,
   "Hızlı İleri Sarmayı Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "Basılı Tutarak Hızlı İleri Sar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,
   "Ağır Çekim Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_HOLD_KEY,
   "Ağır Çekim İçin Basılı Tut"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,
   "Durum Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,
   "Durum Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "Tam Ekran Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,
   "RetroArch'dan Çıkış"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_PLUS,
   "Durum Kaydı Yuvası +"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_MINUS,
   "Durum Kaydı Yuvası -"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_REWIND,
   "Geri sar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_BSV_RECORD_TOGGLE,
   "Tekrar Oynatma Film Kaydı Geçişi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_PAUSE_TOGGLE,
   "Duraklat Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FRAMEADVANCE,
   "Kare ilerlemesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESET,
   "Oyunu Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_NEXT,
   "Sonraki Gölgelendirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_PREV,
   "Önceki Gölgelendirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_PLUS,
   "Hile İndeksi +"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_MINUS,
   "Hile İndeksi -"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_TOGGLE,
   "Hile Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,
   "Ekran Görüntüsü Al"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MUTE,
   "Sesi Sustur Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OSK,
   "Ekran Klavyesi Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FPS_TOGGLE,
   "FPS Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SEND_DEBUG_INFO,
   "Hata Ayıklama Bilgisi Gönder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_HOST_TOGGLE,
   "Netplay Sunucu Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_GAME_WATCH,
   "Netplay Oyna/İzle Kipini Değiştir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_ENABLE_HOTKEY,
   "Kısayol tuşları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_UP,
   "Ses +"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_DOWN,
   "Ses -"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OVERLAY_NEXT,
   "Sonraki Kaplama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_EJECT_TOGGLE,
   "Diski Çıkar Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_NEXT,
   "Sonraki Disk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_PREV,
   "Önceki Disk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GRAB_MOUSE_TOGGLE,
   "Fareyi Yakala Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GAME_FOCUS_TOGGLE,
   "Oyun Odaklaması Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_UI_COMPANION_TOGGLE,
   "Masaüstü Menüsü Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MENU_TOGGLE,
   "Menü Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RECORDING_TOGGLE,
   "Kayıt Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STREAMING_TOGGLE,
   "Yayın Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_AI_SERVICE,
   "AI Servisi"
   )

/* Settings > Input > Port # Binds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_TYPE,
   "Cihaz Türü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ADC_TYPE,
   "Analog-Dijital Türü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_INDEX,
   "Cihaz İndeksi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_ALL,
   "Tümünü Bağla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_DEFAULT_ALL,
   "Tümünü Varsayılana Bağla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SAVE_AUTOCONFIG,
   "Otomatik Yapılandırmayı Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_INDEX,
   "Fare İndeksi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,
   "B Düğmesi (Aşağı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,
   "Y Düğmesi (Sol)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,
   "Seç Düğmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,
   "Başlat Düğmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,
   "Yukarı D-Pad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,
   "Aşağı D-Pad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,
   "Sol D-Pad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,
   "Sağ D-Pad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,
   "A Düğmesi (Sağ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,
   "X Düğmesi (Üst)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,
   "L Düğmesi (Omuz)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,
   "R Düğmesi (Omuz)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,
   "L2 Düğmesi (Tetik)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,
   "R2 Düğmesi (Tetik)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,
   "L3 Düğmesi (Başparmak)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,
   "R3 Düğmesi (Başparmak)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,
   "Sol Analog X+ (Sağ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,
   "Sol Analog X- (Sol)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,
   "Sol Analog Y+ (Aşağı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,
   "Sol Analog Y- (Yukarı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,
   "Sağ Analog X+ (Sağ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,
   "Sağ Analog X- (Sol)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,
   "Sağ Analog Y+ (Aşağı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,
   "Sağ Analog Y- (Yukarı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,
   "Silah Tetikleyici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,
   "Silah Değiştirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_A,
   "Silah Aux A"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_B,
   "Silah Aux B"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_C,
   "Silah Aux C"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_START,
   "Silah Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_SELECT,
   "Silah Seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,
   "Silah D-Pad Üst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,
   "Silah D-Pad Alt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,
   "Silah D-Pad Sol"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,
   "Silah D-Pad Sağ"
   )

/* Settings > Latency */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_ENABLED,
   "Gecikmeyi Azaltmak için Önden-Git"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_ENABLED,
   "Çekirdek mantığını bir veya daha fazla karenin önünde çalıştırın, ardından algılanan giriş gecikmesini azaltmak için durumu geri yükleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_FRAMES,
   "Önden Gidilecek Kare Sayısı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_FRAMES,
   "Önde çalışacak kare sayısı. Oyunun içindeki gecikmeli çerçeve sayısını aşarsanız, jitter(seğirme) gibi oyun sorunlarına neden olur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_SECONDARY_INSTANCE,
   "Önden Gidici İkinci Örneği Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_SECONDARY_INSTANCE,
   "Devam etmek için RetroArch Çekirdeğin ikinci bir örneğini kullanır. Yükleme durumu nedeniyle ses sorunlarını önler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_HIDE_WARNINGS,
   "Önden Gidici Uyarılarını Gizle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_HIDE_WARNINGS,
   "Ön-Koşucu kullanırken ortaya çıkan uyarı mesajını gizler ve çekirdek durum kaydediciyi desteklemez."
   )

/* Settings > Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHARED_CONTEXT,
   "Paylaşılan Donanım İçeriği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHARED_CONTEXT,
   "Donanımla oluşturulan çekirdeklere kendi özel bağlamlarını verin. Kareler arasındaki donanım durumu değişikliklerini üstlenmek zorunda kalmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SWITCH_ENABLE,
   "Çekirdeklerin Video Sürücüsünü Değiştirmesine İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SWITCH_ENABLE,
   "Çekirdeklerin, yüklü olanlardan farklı bir video sürücüsüne geçiş yapmasını sağlayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMMY_ON_CORE_SHUTDOWN,
   "Çekirdeğin Kapanmaması İçin Kukla Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMMY_ON_CORE_SHUTDOWN,
   "Bazı çekirdeklerin kapatma özelliği olabilir. Etkinleştirildiğinde, çekirdeğin RetroArch'ı kapatmasını engeller. Bunun yerine, kukla bir çekirdek yükler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_SUPPORTS_NO_CONTENT_ENABLE,
   "Çekirdeği Otomatik Başlatır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHECK_FOR_MISSING_FIRMWARE,
   "Yüklemeden Önce Eksik Ürün Yazılımını Denetle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHECK_FOR_MISSING_FIRMWARE,
   "İçerik yüklemeyi denemeden önce gerekli tüm üretici yazılımının olup olmadığını kontrol edin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ALLOW_ROTATE,
   "Döndürmeye İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ALLOW_ROTATE,
   "Çekirdeklerin ekranı ayarlamasına izin ver. Devre dışı bırakıldığında, döndürme istekleri yok sayılır. Ekranı el ile döndüren ayarlarda kullanışlıdır."
   )

/* Settings > Configuration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG_SAVE_ON_EXIT,
   "Çıkışta Yapılandırmayı Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIG_SAVE_ON_EXIT,
   "Çıkışta yapılandırma dosyasındaki değişiklikleri kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS,
   "İçeriğe Özgü Çekirdek Seçeneklerini Otomatik Olarak Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_OPTIONS,
   "Özelleştirilmiş Çekirdek seçeneklerini başlangıçta varsayılan olarak yükleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_OVERRIDES_ENABLE,
   "Üzerine Yazılmış Dosyaları Otomatik Olarak Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_OVERRIDES_ENABLE,
   "Özelleştirilmiş yapılandırmayı başlangıçta yükleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_REMAPS_ENABLE,
   "Yeniden Haritalama Dosyalarını Otomatik Olarak Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_REMAPS_ENABLE,
   "Özelleştirilmiş kontrolleri başlangıçta yükleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_SHADERS_ENABLE,
   "Gölgelendirici Hazır Ayarlarını Otomatik Olarak Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GLOBAL_CORE_OPTIONS,
   "Evrensel Çekirdek Seçenekleri Dosyalarını Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GLOBAL_CORE_OPTIONS,
   "Tüm temel çekirdek seçeneklerini ortak bir ayarlar dosyasına (retroarch-core-options.cfg) kaydeder. Devre dışı bırakıldığında, her çekirdek için seçenekler RetroArch'ın 'Yapılandırma' dizinindeki çekirdeğe özgü ayrı bir klasöre/dosyaya kaydedilir."
   )

/* Settings > Saving */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_ENABLE,
   "Klasördeki Kayıtları Sırala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_ENABLE,
   "Kullanılan Çekirdeğin adını taşıyan klasörlerde kaydetme dosyalarını sıralayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_ENABLE,
   "Klasörlerdeki Durum Kayıtlarını Sırala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_ENABLE,
   "Kullanılan Çekirdeğin adını taşıyan klasörlerde kaydetme durumlarını sıralayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLOCK_SRAM_OVERWRITE,
   "Durum Kaydı SaveRAM Üstüne Yazılmasın"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLOCK_SRAM_OVERWRITE,
   "Durum kayıtları yüklenirken SaveRAM üzerine yazılmasını engelle. Potansiyel olarak hatalı oyunlara yol açabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTOSAVE_INTERVAL,
   "SaveRAM Otomatik Kaydetme Aralığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTOSAVE_INTERVAL,
   "Geçici olmayan SaveRAM'ı düzenli aralıklarla otomatik olarak kaydeder. Aksi belirtilmedikçe bu varsayılan olarak devre dışıdır. Aralık saniye cinsinden ölçülür. 0 değeri otomatik kaydetmeyi devre dışı bırakır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_INDEX,
   "Durumu Dizine Otomatik Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_INDEX,
   "Bir kayıt işlemi yaparken, kaydetme durumu indeksi, kaydedilmeden önce otomatik olarak artırılır. İçerik yüklenirken, dizin mevcut en yüksek dizine ayarlanacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_SAVE,
   "Otomatik Durum Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_SAVE,
   "RetroArch'ın çalışma zamanının sonunda otomatik olarak bir kayıt ekranı oluşturur. 'Otomatik Yükleme Durumu' etkinse, RetroArch otomatik olarak bu ekranı yükleyecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_LOAD,
   "Otomatik Durum Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_LOAD,
   "Otomatik kaydetme durumunu başlangıçta otomatik olarak yükle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_THUMBNAIL_ENABLE,
   "Durum Kaydedici Küçük Resimleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_THUMBNAIL_ENABLE,
   "Menü içindeki kaydetme durumlarının küçük resimlerini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_FILE_COMPRESSION,
   "RAMKaydı Sıkıştırması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_FILE_COMPRESSION,
   "Kalıcı olmayan SaveRAM dosyalarını arşivlenmiş biçimde yazın. Artan kaydetme / yükleme süreleri (ihmal edilebilir şekilde) pahasına dosya boyutunu önemli ölçüde azaltır. Not: Yalnızca standart libretro SaveRAM arabirimi üzerinden kaydetmeyi sağlayan çekirdekler için geçerlidir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_FILE_COMPRESSION,
   "Durum Kaydı Sıkıştırması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_FILE_COMPRESSION,
   "Durum kaydetme dosyalarını arşivlenmiş biçimde yaz. Artan kaydetme/yükleme süreleri pahasına dosya boyutunu önemli ölçüde azaltır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILES_IN_CONTENT_DIR_ENABLE,
   "Kayıtları İçerik Dizinine Yaz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATES_IN_CONTENT_DIR_ENABLE,
   "Durum Kayıtlarını İçerik Dizinine Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEMFILES_IN_CONTENT_DIR_ENABLE,
   "Sistem Dosyaları İçerik Dizinine"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOTS_IN_CONTENT_DIR_ENABLE,
   "Ekran Görüntülerini İçerik Dizinine Yaz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG,
   "Çalışma Günlüğünü Kaydet (Çekirdek Başına)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG,
   "Her bir içerik öğesinin ne kadar süre çalıştığını, kayıtlar Çekirdeğe ayrılmış olarak izler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG_AGGREGATE,
   "Çalışma Günlüğünü Kaydet (Toplam)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG_AGGREGATE,
   "Tüm içeriğin toplamının toplam olarak kaydedildiği her bir içerik öğesinin ne kadar süre çalıştığını takip eder."
   )

/* Settings > Logging */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY,
   "Günlük Ayrıntılandırma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_VERBOSITY,
   "Olayları bir uçbirimde aç veya dosyaya kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_LOG_LEVEL,
   "Frontend Günlük Seviyesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRONTEND_LOG_LEVEL,
   "Ön uç için günlük seviyesini ayarlar. Ön uç tarafından verilen bir günlük seviyesi bu değerin altındaysa, dikkate alınmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_LOG_LEVEL,
   "Çekirdek Günlük Seviyesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_LOG_LEVEL,
   "Çekirdekler için günlük seviyesini ayarlar. Çekirdek tarafından verilen günlük seviyesi bu değerin altındaysa, dikkate alınmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE,
   "Dosyaya Günlükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE,
   "Sistem olay günlüğü iletilerini dosyaya yönlendirir. Etkinleştirilmesi için 'Günlük Ayrıntılandırma' gerektirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE_TIMESTAMP,
   "Zaman Damgalı Günlük Dosyaları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE_TIMESTAMP,
   "Dosyaya giriş yaparken, çıktıyı her RetroArch oturumundan yeni bir zaman damgalı dosyaya yönlendirir. Devre dışı bırakılırsa, RetroArch yeniden başlatıldığında her günlüğün üzerine yazılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PERFCNT_ENABLE,
   "Performans Sayaçları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PERFCNT_ENABLE,
   "RetroArch (ve çekirdekler) için performans sayaçları.\nSayaç verileri sistem darboğazlarının belirlenmesine ve sistem ve uygulama performansının ince ayarına yardımcı olabilir"
   )

/* Settings > File Browser */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_HIDDEN_FILES,
   "Gizli Dosya ve Klasörleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_HIDDEN_FILES,
   "Dosya tarayıcısının içindeki gizli dosyaları/dizinleri göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "Bilinmeyen Eklentileri Süzgeçle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "Dosya gezgininde desteklenen uzantılarla gösterilen dosyaları filtrele."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_PLAYER,
   "Dahili Medya Oynatıcı Kullan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILTER_BY_CURRENT_CORE,
   "Mevcut Çekirdeğe Göre Süzgeçle"
   )

/* Settings > Frame Throttle */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_SETTINGS,
   "Geri Sar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_REWIND,
   "Geri sarma ayarlarını yönet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_SETTINGS,
   "Çerçeve Zaman Sayacı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_SETTINGS,
   "Kare zaman sayacını etkileyen ayarları yapın (yalnızca threaded video devre dışı olduğunda etkindir)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FASTFORWARD_RATIO,
   "Azami Çalışma Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FASTFORWARD_RATIO,
   "Hızlı ileri sarma kullanılırken içeriğin çalıştırılacağı azami hız (ör. 60 fps içerik için 5.0x = 300 fps kapak). 0.0x olarak ayarlanmışsa, hızlı sarma oranı sınırsızdır (FPS sınırı yok)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SLOWMOTION_RATIO,
   "Ağır Çekim Oranı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SLOWMOTION_RATIO,
   "Ağır çekimde, içerik belirtilen/ayarlanan aşamaya göre yavaşlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENUM_THROTTLE_FRAMERATE,
   "Menü Kare Hızı Sınırı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENUM_THROTTLE_FRAMERATE,
   "Menünün içindeyken kare hızının kapatıldığından emin olun."
   )

/* Settings > Frame Throttle > Rewind */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_ENABLE,
   "Geri Sarma Desteği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_ENABLE,
   "Bir hata yaptım? Geri sar ve tekrar dene.\nBunun, performans düşüşüne neden olduğuna dikkat edin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_GRANULARITY,
   "Geri Sarma Öge Boyu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_GRANULARITY,
   "Tanımlanmış sayıda kare geri alırken, bir defada birkaç kare geri sararak geri sarma hızını artırabilirsiniz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE,
   "Geri Sarma Önbelleği (MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE,
   "Geri alma arabelleği için ayrılacak bellek miktarı (MB cinsinden). Bunun arttırılması, geri sarma geçmişinin miktarını artıracaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE_STEP,
   "Geri Sarma Önbelleği Aşaması (MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE_STEP,
   "Bu kullanıcı arabirimiyle geri alma arabellek boyutu değerini her artırdığınızda ya da azaltdığınızda, bu miktar kadar değişecektir."
   )

/* Settings > Frame Throttle > Frame Time Counter */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "İleri Sarmadan Sonra Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "Hızlı ileri sarmadan sonra kare süresi sayacını sıfırlayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "Durum Yüklemesinden Sonra Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "Bir durum yükledikten sonra kare süresi sayacını sıfırlayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "Durumu Kaydettikten Sonra Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "Bir durumu kaydettikten sonra kare zaman sayacını sıfırla."
   )

/* Settings > Recording */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_QUALITY,
   "Kayıt Kalitesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_CONFIG,
   "Özel Kayıt Yapılandırması"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_THREADS,
   "Kayıt Konuları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_POST_FILTER_RECORD,
   "Filtre Sonrası Kaydı Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_POST_FILTER_RECORD,
   "Filtreler (gölgelendirici değil) uygulandıktan sonra görüntüyü çekin. Videonuz, ekranda gördüğünüz kadar süslü görünecek."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_RECORD,
   "Kayıtlarda GPU Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_RECORD,
   "Varsa, GPU gölgelendiricileri çıkışını kaydeder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_MODE,
   "Yayıncı Kipi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAM_QUALITY,
   "Yayın Kalitesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAM_CONFIG,
   "Özel Yayın Yapılandırması"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_TITLE,
   "Yayın Başlığı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_URL,
   "Yayın URL'si"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UDP_STREAM_PORT,
   "UDP Yayın Portu"
   )

/* Settings > On-Screen Display */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_OVERLAY_SETTINGS,
   "Ekran Kaplaması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_OVERLAY_SETTINGS,
   "Çerçeveleri ve ekran denetimlerini ayarla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "Video Düzeni"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "Video Düzenini Ayarla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "Ekrandaki Bildirimler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "Ekran Bildirimlerini Ayarla"
   )

/* Settings > On-Screen Display > On-Screen Overlay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_ENABLE,
   "Kaplamayı Görüntüle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_ENABLE,
   "Kaplamalar kenarlıklar ve ekran kontrolleri için kullanılır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_IN_MENU,
   "Menüde Kaplamayı Gizle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_IN_MENU,
   "Menü içindeyken kaplamayı gizleyin ve menüden çıkarken tekrar gösterin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS,
   "Girişlerde Kaplamayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS,
   "Ekran kaplaması üzerinde klavye/kontroller girişlerini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS_PORT,
   "Girişlerin Portunu Listede Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS_PORT,
   "Yerleşim Girdilerini Göster seçeneği etkinse dinlenecek portu seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "Fare İmlecini Bindirmeli Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "Ekran kaplaması kullanırken fare imlecini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_ROTATE,
   "Kaplamayı Otomatik Döndür"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_ROTATE,
   "Geçerli kaplama tarafından destekleniyorsa, ekran yönü/en boy oranıyla eşleşmesi için düzeni otomatik olarak döndürür."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY,
   "Kaplama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_AUTOLOAD_PREFERRED,
   "Tercih Edilen Kaplamayı Otomatik Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_OPACITY,
   "Kaplama Şeffaflığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_OPACITY,
   "Kaplamanın Kullanıcı Arayüzündeki elementlerin opaklığı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_PRESET,
   "Kaplama Ön Ayarı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_PRESET,
   "Dosya tarayıcısından bir kaplama seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE,
   "Kaplama Ölçeği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE,
   "Kaplamanın Kullanıcı Arayüzündeki elementlerin boyutu."
   )

/* Settings > On-Screen Display > Video Layout */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_ENABLE,
   "Video Düzenini Etkinleştir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_ENABLE,
   "Video düzenleri, çerçeveler ve diğer resimler için kullanılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_PATH,
   "Video Düzeni Yolu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_PATH,
   "Dosya tarayıcısından bir video düzeni seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_SELECTED_VIEW,
   "Seçili Görünüm"
   )
MSG_HASH( /* FIXME Unused */
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_SELECTED_VIEW,
   "Yüklenen düzen içinde bir görünüm seç."
   )

/* Settings > On-Screen Display > On-Screen Notifications */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_ENABLE,
   "Ekrandaki Bildirimler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_ENABLE,
   "Ekrandaki iletileri göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGETS_ENABLE,
   "Grafik Gereçleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGETS_ENABLE,
   "Yalnızca eski metin sistemi yerine modern dekore edilmiş animasyonları, bildirimleri, göstergeleri ve kontrolleri kullanın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_AUTO,
   "Grafik Gereçlerini Otomatik Ölçekle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_AUTO,
   "Mevcut menü ölçeğine göre dekore edilmiş bildirimleri, göstergeleri ve kontrolleri otomatik olarak yeniden boyutlandır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR_FULLSCREEN,
   "Grafik Gereçleri Ölçeğini Geçersiz Kıl (Tam ekran)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR_FULLSCREEN,
   "Tam ekran kipinde ekran gereçlerini çizerken el ile ölçeklendirme aşamasını geçersiz kılar. Yalnızca 'Grafik Gereçlerini Otomatik Ölçeklendir' devre dışı bırakıldığında geçerlidir. Dekore edilmiş bildirimlerin, göstergelerin ve kontrollerin boyutunu menünün kendisinden bağımsız olarak arttırmak veya azaltmak için kullanılabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR_WINDOWED,
   "Grafik Gereçleri Ölçeğini Geçersiz Kıl (Pencereli)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR_WINDOWED,
   "Pencereli ekran kipinde ekran gereçlerini çizerken el ile ölçeklendirme aşamasını geçersiz kılar. Yalnızca 'Grafik Gereçlerini Otomatik Ölçeklendir' devre dışı bırakıldığında geçerlidir. Dekore edilmiş bildirimlerin, göstergelerin ve kontrollerin boyutunu menünün kendisinden bağımsız olarak arttırmak veya azaltmak için kullanılabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_SHOW,
   "Ekran Kare Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_SHOW,
   "Ekrandaki saniye başına mevcut kare hızını görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_UPDATE_INTERVAL,
   "Kare Hızı Güncelleme Aralığı (Karelerde)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_UPDATE_INTERVAL,
   "Kare hızı ekranı, ayarlanan aralıkta (kare olarak) güncellenir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAMECOUNT_SHOW,
   "Kare Sayısını Görüntüle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAMECOUNT_SHOW,
   "Ekrandaki mevcut kare sayısını görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATISTICS_SHOW,
   "İstatistikleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATISTICS_SHOW,
   "Ekrandaki teknik istatistikleri göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_SHOW,
   "Bellek Ayrıntılarını Dahil Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_SHOW,
   "Mevcut bellek kullanımı/toplamı ekrandaki FPS/Kare sayısını içerir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_PATH,
   "Bildirim Yazı Tipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_PATH,
   "Ekrandaki bildirimler için farklı bir yazı tipi seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_SIZE,
   "Bildirim Boyutu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_SIZE,
   "Yazı tipi boyutunu nokta cinsinden belirtin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_X,
   "Bildirim Konumu (Yatay)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_X,
   "Ekrandaki metin için özel X ekseni konumunu belirt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_Y,
   "Bildirim Konumu (Dikey)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_Y,
   "Ekrandaki metin için özel Y ekseni konumunu belirt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_RED,
   "Bildirim Rengi (Kırmızı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_GREEN,
   "Bildirim Rengi (Yeşil)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_BLUE,
   "Bildirim Rengi (Mavi)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_ENABLE,
   "Bildirim Arkaplanı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_RED,
   "Bildirim Arkaplan Rengi (Kırmızı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_GREEN,
   "Bildirim Arkaplan Rengi (Yeşil)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_BLUE,
   "Bildirim Arkaplan Rengi (Mavi)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_OPACITY,
   "Bildirim Arkaplanı Şeffaflığı"
   )

/* Settings > User Interface */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_VIEWS_SETTINGS,
   "Görünümler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_VIEWS_SETTINGS,
   "Menü ekranındaki ögeleri göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SETTINGS,
   "Görünüm"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SETTINGS,
   "Menü ekranı görünüm ayarlarını düzenler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_ADVANCED_SETTINGS,
   "Gelişmiş Ayarları Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_ADVANCED_SETTINGS,
   "Uzman kullanıcılar için gelişmiş ayarları göster (varsayılan olarak gizli)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENABLE_KIOSK_MODE,
   "Kiosk Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENABLE_KIOSK_MODE,
   "Konfigürasyonla ilgili tüm ayarları gizleyerek kurulumu korur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_KIOSK_MODE_PASSWORD,
   "Kiosk Kipini Devre Dışı Bırakmak için Parola Ayarla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_KIOSK_MODE_PASSWORD,
   "Kiosk modunu etkinleştirirken bir parola girilir, Ana Menü'ye gidip Kiosk Modunu Devre Dışı Bırak'ı seçip parolayı girerek daha sonra menüden devre dışı bırakmayı mümkün kılar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_WRAPAROUND,
   "Gezinti Sarmalı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_WRAPAROUND,
   "Liste sınırına yatay veya dikey olarak ulaşılırsa, baştan sona ve / veya sona doğru kaydırın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_LIBRETRO,
   "Menü Etkinleştirildiğinde Duraklat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_LIBRETRO,
   "Devre dışı bırakılırsa, RetroArch menüsü değiştirildiğinde, içerik arka planda çalışmaya devam eder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SAVESTATE_RESUME,
   "Durum Kayıtlarını Kullandıktan Sonra İçeriğe Devam Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SAVESTATE_RESUME,
   "Hızlı Menüden 'Durumu Kaydet' veya 'Durumu Yükle' seçtikten sonra menüyü otomatik olarak kapat ve mevcut içeriği devam ettir. Bunu devre dışı bırakmak, çok yavaş cihazlarda tasarruf durumu performansını artırabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INSERT_DISK_RESUME,
   "Diskleri Değiştirdikten Sonra İçeriğe Devam Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INSERT_DISK_RESUME,
   "Disk Kontrolü menüsünden 'Disk Ekle' veya 'Yeni Disk Yükle' seçtikten sonra menüyü otomatik olarak kapat ve mevcut içeriğe devam et."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MOUSE_ENABLE,
   "Fare Desteği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MOUSE_ENABLE,
   "Menünün fare ile kontrol edilmesini sağla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POINTER_ENABLE,
   "Dokunmatik Desteği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POINTER_ENABLE,
   "Menünün ekran dokunuşlarıyla kontrol edilmesini sağla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THREADED_DATA_RUNLOOP_ENABLE,
   "Zincir Görevler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THREADED_DATA_RUNLOOP_ENABLE,
   "Ayrı bir iş parçacığında görevleri gerçekleştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_NONACTIVE,
   "Arka Planda Çalıştırma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_NONACTIVE,
   "RetroArch etkin pencere olmadığında oyunu duraklat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DISABLE_COMPOSITION,
   "Masaüstü Bileşimi Devre Dışı Bırak"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DISABLE_COMPOSITION,
   "Pencere yöneticileri, görsel efektleri uygulamak, yanıt vermeyen pencereleri tespit etmek için diğer şeylerin yanı sıra bileşimi kullanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCROLL_FAST,
   "Menü Kaydırma Hızlandırıcı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCROLL_FAST,
   "Kaydırmak için bir yön tutarken imlecin azami hızı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_ENABLE,
   "Arayüz Yardımcısı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_START_ON_BOOT,
   "Açılışta Arayüz Yardımcısını Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_MENUBAR_ENABLE,
   "Menü Çubuğu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DESKTOP_MENU_ENABLE,
   "Masaüstü Menüsü (Yeniden Başlat)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_TOGGLE,
   "Başlangıçta Masaüstü Menüsünü Göster"
   )

/* Settings > User Interface > Views */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_VIEWS_SETTINGS,
   "Hızlı Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_VIEWS_SETTINGS,
   "Hızlı Menü ekranındaki öğeleri göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_VIEWS_SETTINGS,
   "Ayarlar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_VIEWS_SETTINGS,
   "Ayarlar ekranındaki ögeleri göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CORE,
   "Çekirdek Yüklemeyi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CORE,
   "'Çekirdek Yükle' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT,
   "İçerik Yükle'yi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT,
   "'İçerik Yükle' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_DISC,
   "Disk Yükle'yi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_DISC,
   "'Disk Yükle' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_DUMP_DISC,
   "Diskten Aktarı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_DUMP_DISC,
   "'Diskten Aktar' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_ONLINE_UPDATER,
   "Çevrimiçi Güncelleyiciyi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_ONLINE_UPDATER,
   "'Çevrimiçi Güncelleyici' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CORE_UPDATER,
   "Çekirdek İndiriciyi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CORE_UPDATER,
   "Çekirdek güncelleme özelliğini göster/gizle (ve temel bilgi dosyaları)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "Eski Küçük Resimleri Güncelleyiciyi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "Eski küçük resim paketlerini indirme özelliğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_INFORMATION,
   "Bilgileri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_INFORMATION,
   "'Bilgi' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CONFIGURATIONS,
   "Yapılandırma Dosyasını Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CONFIGURATIONS,
   "'Yapılandırma Dosyası' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_HELP,
   "Yardımı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_HELP,
   "'Yardım' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_QUIT_RETROARCH,
   "RetroArch'tan Çıkışı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_QUIT_RETROARCH,
   "'RetroArch'tan Çık' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_RESTART_RETROARCH,
   "RetroArch'ı Yeniden Başlat'ı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_RESTART_RETROARCH,
   "'RetroArch'ı Yeniden Başlat' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS,
   "Ayarlar Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS,
   "Ana menünün içindeki ayarlar sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS_PASSWORD,
   "Ayarları Etkinleştirmek için Şifreyi Ayarla Sekmesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS_PASSWORD,
   "Ayarlar sekmesini gizlerken bir şifre sağlar, Ana Menü sekmesine gidip, Ayarlar Sekmesini Etkinleştir'i seçip şifreyi girerek, menüden daha sonra geri yüklemeyi mümkün kılar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_FAVORITES,
   "Sık Kullanılanlar Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_FAVORITES,
   "Ana menünün içindeki sık kullanılanlar sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_IMAGES,
   "Resim Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_IMAGES,
   "Ana menünün içindeki resimler sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_MUSIC,
   "Müzik Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_MUSIC,
   "Ana menünün içindeki müzik sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO,
   "Video Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO,
   "Ana menünün içindeki video sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_NETPLAY,
   "Netplay Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_NETPLAY,
   "Ana menünün içindeki netplay sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_HISTORY,
   "Geçmiş Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_HISTORY,
   "Ana menünün içindeki geçmiş sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD,
   "İçerik Ekle Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_ADD,
   "Ana menünün içindeki içerik yükle sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_PLAYLISTS,
   "Oynatma Listesi Sekmesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_PLAYLISTS,
   "Ana menünün içindeki oynatma listesi sekmesini göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_ENABLE,
   "Tarih ve Saati Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_ENABLE,
   "Menü içindeki geçerli tarihi ve/veya saati gösterir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_STYLE,
   "Tarih ve Saat Görünümü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_STYLE,
   "Menü içindeki tarih ve/veya saatin görünümünü değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DATE_SEPARATOR,
   "Tarih Ayırıcı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_DATE_SEPARATOR,
   "Mevcut tarih menünün içinde görüntülendiğinde yıl/ay/ gün bileşenleri arasında ayırıcı olarak kullanılacak karakteri belirtir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BATTERY_LEVEL_ENABLE,
   "Pil Seviyesini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BATTERY_LEVEL_ENABLE,
   "Menü içindeki geçerli pil seviyesini gösterir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ENABLE,
   "Çekirdek İsmini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ENABLE,
   "Menüdeki mevcut çekirdek adını gösterir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SUBLABELS,
   "Menü Alt Etiketlerini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SUBLABELS,
   "Seçili olan menü girişi için ek bilgi gösterir."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_SHOW_START_SCREEN,
   "Başlangıç Ekranını Görüntüle"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_SHOW_START_SCREEN,
   "Menüde başlangıç ekranını göster. Bu program ilk kez başladıktan sonra otomatik olarak false değerine ayarlanır."
   )

/* Settings > User Interface > Views > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESUME_CONTENT,
   "İçeriğe Devam Eti Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESUME_CONTENT,
   "'İçeriğe Devam Et' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESTART_CONTENT,
   "İçeriğini Yeniden Başlatmayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESTART_CONTENT,
   "'İçeriği Yeniden Başlat' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "İçeriği Kapatı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "'İçeriği Kapat' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "Ekran Görüntüsü Almayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "'Ekran Görüntüsü Al' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "Durum Kaydet/Yükle Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "Durum kaydet/yükle seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "Kaydet/Yükle Konumunu Geri Almayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "Durum kaydet/yükle seçeneğini geri al göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "Sık Kullanılanlara Ekle Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "'Sık Kullanılanlara Ekle' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_RECORDING,
   "Kaydı Başlatmayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_RECORDING,
   "'Kaydı Başlat' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_STREAMING,
   "Yayın Başlatı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_STREAMING,
   "'Yayını Başlat' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "Çekirdek Bağlamayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "'Çekirdek Bağlamayı Ayarla' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "Çekirdek Eşleşmesini Sıfırla Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "'Çekirdek Eşlemesini Sıfırla' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_OPTIONS,
   "Seçenekleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_OPTIONS,
   "'Seçenekler' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CONTROLS,
   "Kontrolleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CONTROLS,
   "'Kontroller' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CHEATS,
   "Hileleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CHEATS,
   "'Hileler' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SHADERS,
   "Gölgelendiricileri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SHADERS,
   "'Gölgelendiriciler' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_REWIND,
   "Geri Sarma Ayarlarını Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_REWIND,
   "Geri Sarma seçeneklerini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_LATENCY,
   "Gecikme seçeneklerini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_LATENCY,
   "Gecikme Ayarlarını Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_OVERLAYS,
   "Kaplama seçeneklerini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_OVERLAYS,
   "Kaplama Ayarlarını Göster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO_LAYOUT,
   "Video Düzeni Ayarlarını Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO_LAYOUT,
   "Video Düzeni seçeneklerini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "Çekirdek Üzerine Yazmalarını göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "'Çekirdek Üzerine Yazmaları' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "Oyun Kaydetme Üzerine Yazmalarını Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "'Oyun Kaydetme Üzerine Yazmaları' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_INFORMATION,
   "Bilgileri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_INFORMATION,
   "'Bilgi' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "Küçük Resimleri İndir'i Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "'Küçük Resimleri İndir' seçeneğini göster/gizle."
   )

/* Settings > User Interface > Views > Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DRIVERS,
   "Sürücüleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DRIVERS,
   "Ayarlar ekranında 'Sürücü Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_VIDEO,
   "Videoyu Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_VIDEO,
   "Ayarlar ekranında 'Video Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AUDIO,
   "Sesi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AUDIO,
   "Ayarlar ekranında 'Ses Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_INPUT,
   "Girişi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_INPUT,
   "Ayarlar ekranında 'Giriş Ayarlarını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LATENCY,
   "Gecikmeyi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LATENCY,
   "Ayarlar ekranında 'Gecikme Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CORE,
   "Çekirdeği Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CORE,
   "Ayarlar ekranında 'Çekirdek Ayarlarını' gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CONFIGURATION,
   "Yapılandırmayı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CONFIGURATION,
   "Ayarlar ekranında 'Yapılandırma Ayarlarını' gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_SAVING,
   "Kaydetmeyi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_SAVING,
   "Ayarlar ekranında 'Ayarları Kaydet'i göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LOGGING,
   "Günlüğü Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LOGGING,
   "Ayarlar ekranında 'Günlük Ayarlarını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FRAME_THROTTLE,
   "Kare Sınırını Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FRAME_THROTTLE,
   "Ayarlar ekranında 'Kare Sınırını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_RECORDING,
   "Kayıt Özelliğini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_RECORDING,
   "Ayarlar ekranında 'Kayıt Ayarlarını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "Ekrandaki Görünümü Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "Ayarlar ekranında 'Ekran Görünümü Ayarlarını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER_INTERFACE,
   "Kullanıcı Arayüzünü Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER_INTERFACE,
   "Ayarlar ekranında 'Kullanıcı Arayüzü Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AI_SERVICE,
   "Çeviri Servisini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AI_SERVICE,
   "Ayarlar ekranında 'Çeviri Servis Ayarlarını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_POWER_MANAGEMENT,
   "Güç Yönetimini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_POWER_MANAGEMENT,
   "Ayarlar ekranında 'Güç Yönetimi Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACHIEVEMENTS,
   "Başarıları Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACHIEVEMENTS,
   "Ayarlar ekranında 'Başarılar Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_NETWORK,
   "Ağı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_NETWORK,
   "Ayarlar ekranında 'Ağ Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_PLAYLISTS,
   "Oynatma Listelerini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_PLAYLISTS,
   "Ayarlar ekranında 'Oynatma Listeleri Ayarları'nı gösterin veya gizleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER,
   "Kullanıcıyı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER,
   "Ayarlar ekranında 'Kullanıcı Ayarlarını' göster veya gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DIRECTORY,
   "Dizini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DIRECTORY,
   "Ayarlar ekranında 'Dizin Ayarları'nı gösterin veya gizleyin."
   )

/* Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCALE_FACTOR,
   "Menü Ölçeklendirme Etkeni"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCALE_FACTOR,
   "Menüyü çizerken genel bir ölçeklendirme aşaması uygular. Kullanıcı arayüzünün boyutunu artırmak veya azaltmak için kullanılabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER,
   "Arkaplan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER,
   "Menü duvar kağıdı olarak ayarlamak için bir resim seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER_OPACITY,
   "Arkaplan Saydamlığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER_OPACITY,
   "Arka plan duvar kağıdının opaklığını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FRAMEBUFFER_OPACITY,
   "Kare Arabellek Saydamlığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FRAMEBUFFER_OPACITY,
   "Kare arabellek saydamlığını değiştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "Tercih Edilen Sistem Renk Temasını Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "İşletim sisteminizin renk temasını kullanın (varsa) - tema ayarlarını geçersiz kılar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS,
   "Küçük Resimler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS,
   "Görüntülenecek küçük resim türü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "Küçük Resim Yükseltme Eşiği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "Belirtilen değerden daha küçük bir genişlik/yüksekliğe sahip küçük resim görüntülerini otomatik olarak yükseltin. Görüntü kalitesini artırır. Orta düzeyde performansa eksi etkisi vardır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE,
   "Kayan Yazı Animasyonu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_TYPE,
   "Uzun menü metin dizelerini görüntülemek için kullanılan yatay kaydırma yöntemini seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SPEED,
   "Kayan Metin Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SPEED,
   "Uzun menü metni dizelerinde gezinirken animasyon hızı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SMOOTH,
   "Düzgün Kayan Metin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SMOOTH,
   "Uzun menü metin dizelerini görüntülerken yumuşak kaydırma animasyonu kullanın. Küçük bir performans etkisi var."
   )

/* Settings > AI Service */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_MODE,
   "Çeviri Servisi Çıkış"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_MODE,
   "Çeviriyi metin yer paylaşımı olarak göster (Görüntü kipi) veya Metin-Konuşma (Konuşma kipi) olarak yürüt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_URL,
   "Çeviri Servisi URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_URL,
   "Kullanılacak çeviri hizmetini gösteren bir http:// url'si."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_ENABLE,
   "Çeviri Servisi Etkinleştirildi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_ENABLE,
   "Çeviri Servisi kısayol tuşuna basıldığında çalışacak Çeviri Servisi etkinleştir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_PAUSE,
   "Çeviri Servisini Duraklat Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_PAUSE,
   "Ekran tercüme edilirken çekirdek duraklatılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SOURCE_LANG,
   "Kaynak Dil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SOURCE_LANG,
   "Servisin çevireceği dil. 'Fark Etmez' olarak ayarlanırsa, dili otomatik olarak algılamaya çalışır. Belli bir dile ayarlamak çeviriyi daha doğru hale getirecek."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_TARGET_LANG,
   "Hedef Dil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_TARGET_LANG,
   "Hizmetin çevrileceği dil. 'Fark Etmez' olarak ayarlanırsa, varsayılan dil İngilizce olur."
   )

/* Settings > Accessibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_ENABLED,
   "Erişilebilirliği Etkinleştir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_ENABLED,
   "Menüde gezinme için erişilebilirlik öğreticisi aç/kapat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "Ekran Okuyucusu Konuşma Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "Öğretici için konuşma hızını hızlıdan yavaşa ayarlayın"
   )

/* Settings > Power Management */

/* Settings > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ENABLE,
   "Başarılar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_ENABLE,
   "Klasik oyunlarda özel başarılar kazanmak için yarışın.\nDaha fazla bilgi için, ziyaret et http://retroachievements.org"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Zorlu Kip"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Kazanılan puanların iki katı.\nOyunlar için kaydetme, hileler, geri sarma, duraklatma ve yavaş çekim devre dışı bırakır.\nÇalışma zamanında bu ayarın değiştirilmesi oyununuzu yeniden başlatacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LEADERBOARDS_ENABLE,
   "Lider Tabloları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_LEADERBOARDS_ENABLE,
   "Oyuna özel skor tabloları.\nZorlu kip devre dışı bırakıldığında hiçbir etkisi yoktur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_RICHPRESENCE_ENABLE,
   "Zengin İçerik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_RICHPRESENCE_ENABLE,
   "RetroAchievements internet sitesine ayrıntılı oyun durumu gönderir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_BADGES_ENABLE,
   "Başarı Rozetleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_BADGES_ENABLE,
   "Başarı listesindeki rozetleri görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TEST_UNOFFICIAL,
   "Resmi Olmayan Başarıları Test Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_TEST_UNOFFICIAL,
   "Test amaçlı resmi olmayan başarıları veya deneme özelliklerini kullan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VERBOSE_ENABLE,
   "Verbose Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VERBOSE_ENABLE,
   "Bildirimlerde daha fazla bilgi göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_AUTO_SCREENSHOT,
   "Otomatik Ekran Görüntüsü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_AUTO_SCREENSHOT,
   "Bir başarı kazanıldığında otomatik olarak ekran görüntüsü al."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_START_ACTIVE,
   "Etkinliği Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_START_ACTIVE,
   "Oturumu, tüm başarıları etkinken (daha önce kilidini açmış olanlar da dahil) başlat."
   )

/* Settings > Network */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PUBLIC_ANNOUNCE,
   "Netplay'i Herkese Duyur"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PUBLIC_ANNOUNCE,
   "Netplay oyunlarının kamuya duyurulup duyulmayacağı. Ayarlanmamışsa, istemciler genel lobiyi kullanmak yerine el ile bağlanmalıdır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_USE_MITM_SERVER,
   "Aktarma Sunucusunu Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_USE_MITM_SERVER,
   "Ortadaki bir sunucu üzerinden netplay bağlantılarını iletin. Ana bilgisayar bir güvenlik duvarının arkasındaysa veya NAT/UPnP sorunları varsa kullanışlıdır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER,
   "Aktarma Sunucusu Konumu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MITM_SERVER,
   "Kullanmak için belirli bir aktarma sunucusu seçin. Coğrafi olarak daha yakın yerler daha az gecikme eğilimindedir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_IP_ADDRESS,
   "Sunucu Adresi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_IP_ADDRESS,
   "Bağlanılacak ana bilgisayarın adresi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TCP_UDP_PORT,
   "Netplay TCP Portu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_TCP_UDP_PORT,
   "Ana bilgisayar IP adresinin bağlantı noktası. Bir TCP veya UDP bağlantı noktası olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PASSWORD,
   "Sunucu Parolası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PASSWORD,
   "Netplay ana bilgisayarına bağlanmak için parola. Yalnızca ana bilgisayar kipinde kullanılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATE_PASSWORD,
   "Sunucu İzleyici Parolası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_SPECTATE_PASSWORD,
   "Yalnızca izleyici ayrıcalıklarıyla netplay ana bilgisayarına bağlanmak için parola. Yalnızca ana bilgisayar modunda kullanılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_AS_SPECTATOR,
   "Netplay İzleyici Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_START_AS_SPECTATOR,
   "Seyirci modunda netplay başlatılıp başlatılmayacağı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ALLOW_SLAVES,
   "Bağımlı Kip İstemcilerine İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ALLOW_SLAVES,
   "Bağımlı modda bağlantılara izin verilip verilmeyeceği. Köle modu istemciler her iki tarafta çok az işlem gücü gerektirir, ancak ağ gecikmesinden önemli ölçüde zarar görecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUIRE_SLAVES,
   "Bağımlı Kip İstemcilerine İzin Verme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUIRE_SLAVES,
   "Bağımlı modda olmayan bağlantılara izin verilmemesi. Çok zayıf makineleri olan çok hızlı ağlar dışında önerilmez."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_STATELESS_MODE,
   "Netplay Ülkesiz Kip"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_STATELESS_MODE,
   "Netplay'i kaydetme durumları gerektirmeyen bir modda çalıştırıp çalıştırmamak. True olarak ayarlanırsa, çok hızlı bir ağ gereklidir, ancak geri sarma işlemi yapılmaz, bu yüzden net bir titreme olmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CHECK_FRAMES,
   "Netplay Karelerini Denetle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CHECK_FRAMES,
   "Netplay öğesinin ana bilgisayar ve istemcinin senkronize olduğunu doğrulayacağı karelerdeki sıklık."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "Giriş Kare Gecikmeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "Ağ gecikmesini gizlemek için netplay için kullanılacak giriş gecikmesi karelerinin sayısı. Jitteri azaltır ve gözle görülür giriş gecikmesi pahasına netçeyi daha az CPU-yoğunlaştırır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "Giriş Gecikme Kareleri Aralığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "Ağ gecikmesini gizlemek için kullanılabilecek giriş gecikmesi çerçevelerinin aralığı. Jitteri azaltır ve tahmin edilemeyen girdi gecikmesi pahasına netçeyi daha az CPU yoğun yapar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NAT_TRAVERSAL,
   "Netplay NAT Geçiş"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NAT_TRAVERSAL,
   "Barındırırken, LAN'lardan kaçan UPnP veya benzeri teknolojiler kullanarak, genel İnternetten bağlantıları dinlemeye çalışır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL,
   "Dijital Giriş Paylaşımı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUEST_DEVICE_I,
   "Cihaz İsteği %u"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUEST_DEVICE_I,
   "Verilen giriş cihazıyla oynama isteği."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_ENABLE,
   "Ağ Komutları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_PORT,
   "Ağ Komutları Portu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_ENABLE,
   "Ağ Oyun Kolu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_PORT,
   "Uzak Ağ Temel Port"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_USER_REMOTE_ENABLE,
   "Kullanıcı %d Uzak"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STDIN_CMD_ENABLE,
   "stdin Komutları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STDIN_CMD_ENABLE,
   "stdin komut arayüzü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ON_DEMAND_THUMBNAILS,
   "İsteğe Bağlı Küçük Resim İndirmeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_ON_DEMAND_THUMBNAILS,
   "Oynatma listelerine göz atarken eksik küçük resimleri otomatik olarak indirin. Performansa olumsuz etkisi olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATER_SETTINGS,
   "Güncelleyici"
   )

/* Settings > Network > Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_BUILDBOT_URL,
   "Buildbot Çekirdek URL'si"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_BUILDBOT_URL,
   "Libretro buildbotundaki Çekirdek güncelleyici dizininin URL'si."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BUILDBOT_ASSETS_URL,
   "Buildbot İçerikleri URL’si"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BUILDBOT_ASSETS_URL,
   "Libretro buildbot'taki varlıklar güncelleyici dizinindeki URL."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "İndirilen Arşivi Otomatik Olarak Çıkart"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "İndirdikten sonra, indirilen arşivlerde bulunan dosyaları otomatik olarak çıkart."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "Deneysel Çekirdekleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "Öekirdek İndirici listesine 'deneysel' çekirdekler ekle. Bunlar genellikle geliştirme/test amaçlıdır ve genel kullanım için önerilmez."
   )

/* Settings > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_LIST_ENABLE,
   "Geçmiş Listesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HISTORY_LIST_ENABLE,
   "Son kullanılan oyunların, resimlerin, müziklerin ve videoların oynatma listesini tutar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_SIZE,
   "Geçmiş Listesi Boyutu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_HISTORY_SIZE,
   "Oyunlar, resimler, müzik ve videolar için son oynatma listesindeki giriş sayısını sınırla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_FAVORITES_SIZE,
   "Sık Kullanılanlar Listesi Boyutu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_FAVORITES_SIZE,
   "Sık kullanılanlar oynatma listesindeki giriş sayısını sınırlayın. Sınıra ulaşıldığında, eski girişler kaldırılıncaya kadar yeni eklemeler engellenir. -1 değerinin ayarlanması 'sınırsız' (99999) girişe izin verir. UYARI: Değerin düşürülmesi mevcut girişleri siler!"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_RENAME,
   "Girişleri Yeniden Adlandırmaya İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_RENAME,
   "Kullanıcının çalma listelerindeki girişleri yeniden adlandırmasına izin verin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE,
   "Girişleri Kaldırmaya İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_REMOVE,
   "Kullanıcının girişleri listelerden kaldırmasına izin ver."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SORT_ALPHABETICAL,
   "Oynatma Listelerini Alfabetik Olarak Sırala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SORT_ALPHABETICAL,
   "İçerik çalma listelerini alfabetik sıraya göre sıralar. Son kullanılan oyunların, resimlerin, müziklerin ve videoların 'geçmiş' oynatma listelerinin hariç tutulduğunu unutmayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_USE_OLD_FORMAT,
   "Oynatma Listelerini Eski Biçimde Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_USE_OLD_FORMAT,
   "İndirgenmiş düz metin biçimini kullanarak oynatma listeleri yazın. Devre dışı bırakıldığında çalma listeleri JSON kullanılarak biçimlendirilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_COMPRESSION,
   "Oynatma Listelerini Sıkıştır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_COMPRESSION,
   "Diske yazarken oynatma listesi verilerini arşivleyin. Artırılmış CPU kullanımı (göz ardı edilebilir) pahasına dosya boyutunu ve yükleme sürelerini azaltır. Eski veya yeni biçimli oynatma listeleriyle kullanılabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "Oynatma Listelerinde İlişkili Çekirdekleri Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "Oynatma listesi girişlerinde ilişkilendirilmiş çekirdek (varsa) ne zaman etiketleneceğini belirle. NOT: Oynatma listesi alt etiketleri etkinleştirildiğinde bu ayar dikkate alınmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_SUBLABELS,
   "Oynatma Listesi Alt Etiketlerini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_SUBLABELS,
   "Geçerli Çekirdek ilişkilendirme ve çalışma zamanı (varsa) gibi her oynatma listesi girişi için ek bilgi gösterir. Performansı etkiler(değişken)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_CORE,
   "Çekirdek:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME,
   "Oyun Süresi:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED,
   "Son Oynama:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME_TYPE,
   "Oynatma Listesi Alt Etiket Çalışma Zamanı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_RUNTIME_TYPE,
   "Oynatma listesinin alt etiketlerinde hangi çalışma zamanı günlüğü kaydının görüntüleneceğini seçer. (İlgili çalışma zamanı günlüğünün 'Kaydetme' seçenekler menüsünden etkinleştirilmesi gerektiğini unutmayın))"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "Oynatma Listesi Alt Etiket Çalışma Zamanı 'Son Oynatılan' Biçimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "Çalışma zamanı günlük kaydı 'son oynatılan' zaman damgası bilgilerini görüntülerken kullanılan tarih/saat biçimlendirme seklini seçer. Not: '(ÖÖ/ÖS)' seçeneklerinin bazı platformlar üzerinde küçük bir eksi performans etkisi olacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "Bozuk Arşivi Eşleştirme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "Sıkıştırılmış dosyalarla ilişkili girişler için oynatma listelerini ararken, [dosya adı] + [içerik] yerine yalnızca arşiv dosya adıyla eşleştirin. Sıkıştırılmış dosyaları yüklerken yinelenen içerik geçmişi girişlerini önlemek için bunu etkinleştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_WITHOUT_CORE_MATCH,
   "Çekirdek Eşleşmesi Olmadan Tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_WITHOUT_CORE_MATCH,
   "Devre dışı bırakıldığında, içerik yalnızca uzantılarını destekleyen bir Çekirdek varsa oynatma listelerine eklenir. Bunu etkinleştirerek, ne olursa olsun oynatma listesine ekleyecektir. Bu sayede, tarama işleminden sonra ihtiyacınız olan Çekirdeği yükleyebilirsiniz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LIST,
   "Oynatma Listesi Yönetimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LIST,
   "Seçili oynatma listesinde bakım görevleri gerçekleştirin (örneğin, varsayılan çekirdek ilişkilerini ayarla/sıfırla)."
   )

/* Settings > Playlists > Playlist Management */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Varsayılan Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Mevcut bir çekirdek ilişkisine sahip olmayan, oynatma listesi girişi yoluyla içerik başlatırken kullanılacak çekirdeği belirtin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_RESET_CORES,
   "Çekirdek İlişkilendirmeleri Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_RESET_CORES,
   "Tüm oynatma listesi girişleri için mevcut çekirdek ilişkilendirmeleri kaldırın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "Etiket Görüntüleme Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "İçerik etiketlerinin bu oynatma listesinde nasıl görüntülendiğini değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE,
   "Sıralama Yöntemi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_SORT_MODE,
   "Bu oynatma listesindeki girdilerin nasıl sıralanacağını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "Oynatma Listesini Temizle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "Geçersiz/yinelenen girdileri kaldır ve çekirdek ilişkilendirmeleri doğrula."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_PLAYLIST,
   "Oynatma Listesini Sil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_PLAYLIST,
   "Oynatma listesini dosya sisteminden kaldır."
   )

/* Settings > User */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRIVACY_SETTINGS,
   "Gizlilik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PRIVACY_SETTINGS,
   "Gizlilik ayarlarınızı değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST,
   "Hesaplar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_LIST,
   "Yapılandırılmış hesapları yönetir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NICKNAME,
   "Kullanıcı Adı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NICKNAME,
   "Kullanıcı adınızı buraya girin. Diğer işlemlerin yanı sıra Netplay oturumları için de kullanılacak."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_LANGUAGE,
   "Dil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_LANGUAGE,
   "Arayüzün dilini ayarlar."
   )

/* Settings > User > Privacy */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_ALLOW,
   "Kameraya İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_ALLOW,
   "Kameranın Çekirdek tarafından erişimine izin ver veya verme."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_ALLOW,
   "Discord Zengin İçerik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISCORD_ALLOW,
   "Discord uygulamasının oynatılan içerik hakkında veri göstermesine izin verir.\nNOT: Tarayıcı sürümü ile çalışmaz, yalnızca yerel masaüstü istemcisi ile çalışır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_ALLOW,
   "Konuma İzin Ver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_ALLOW,
   "Konum servislerinin Çekirdek tarafından erişimine izin ver veya verme."
   )

/* Settings > User > Accounts */

MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "RetroAchievements hizmeti. Daha fazla bilgi için http://retroachievements.org adresini ziyaret edin."
   )

/* Settings > User > Accounts > RetroAchievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_USERNAME,
   "Kullanıcı adı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_USERNAME,
   "RetroAchievements hesabınızın kullanıcı adını girin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_PASSWORD,
   "Parola"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_PASSWORD,
   "RetroAchievements hesabınızın parolasını girin."
   )

/* Settings > User > Accounts > YouTube */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YOUTUBE_STREAM_KEY,
   "YouTube Yayıncı Anahtarı"
   )

/* Settings > User > Accounts > Twitch */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TWITCH_STREAM_KEY,
   "Twitch Yayıncı Anahtarı"
   )

/* Settings > Directory */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_DIRECTORY,
   "Sistem/BIOS"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_DIRECTORY,
   "Sistem dizinini ayarlar. Çekirdekler bu dizini BIOS'ları, sisteme özel yapılandırmaları vb. Yüklemek için sorgulayabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY,
   "İndirilenler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ASSETS_DIRECTORY,
   "İndirilen tüm dosyaları bu dizine kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASSETS_DIRECTORY,
   "İçerikler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ASSETS_DIRECTORY,
   "Menü arayüzleri yüklenebilir varlıklar vb. Aramaya çalıştığında bu konum varsayılan olarak sorgulanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Dinamik Arkaplanlar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Bağlama göre menü tarafından dinamik olarak yüklenmiş duvar kağıtlarını saklamak için dizin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_DIRECTORY,
   "Küçük Resimler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_DIRECTORY,
   "İlave küçük resimler (kutu resimleri / çeşitli görüntüler vb.) Burada saklanır."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_BROWSER_DIRECTORY,
   "Dosya Yöneticisi"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_BROWSER_DIRECTORY,
   "Dosya Gezgini için başlangıç dizinini ayarlar."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_CONFIG_DIRECTORY,
   "Yapılandırma"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_CONFIG_DIRECTORY,
   "Menü yapılandırma tarayıcısı için başlangıç dizinini ayarlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_DIR_PATH,
   "Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_DIR_PATH,
   "Programın içerik/çekirdek aradığı dizin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_INFO_PATH,
   "Çekirdek Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_INFO_PATH,
   "Uygulama/çekirdek bilgi dosyaları burada saklanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DATABASE_DIRECTORY,
   "Veritabanı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DATABASE_DIRECTORY,
   "Veritabanları bu dizine kaydedilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_DIRECTORY,
   "İmleç"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CURSOR_DIRECTORY,
   "Kayıtlı sorgular bu dizine kaydedilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DATABASE_PATH,
   "Hile Dosyası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_DATABASE_PATH,
   "Hile dosyaları burada tutulur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_DIR,
   "Video Filtresi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_DIR,
   "CPU tabanlı video filtre dosyalarının tutulduğu dizin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FILTER_DIR,
   "Ses Filtresi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FILTER_DIR,
   "Ses DSP filtre dosyalarının tutulduğu dizin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DIR,
   "Video Gölgelendirici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DIR,
   "GPU tabanlı video gölgelendirici dosyalarının kolay erişim için tutulduğu bir dizin tanımlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_OUTPUT_DIRECTORY,
   "Kayıt Çıktısı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_OUTPUT_DIRECTORY,
   "Kayıtlar bu dizine aktarılacak."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_CONFIG_DIRECTORY,
   "Kayıt Yapılandırması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_CONFIG_DIRECTORY,
   "Kayıt yapılandırmaları burada tutulur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_DIRECTORY,
   "Kaplama"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_DIRECTORY,
   "Kolay erişim için kaplamaların tutulduğu bir dizini tanımlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_DIRECTORY,
   "Video Düzeni"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_DIRECTORY,
   "Kolay erişim için video düzenlerinin tutulduğu bir dizini tanımlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOT_DIRECTORY,
   "Ekran Görüntüsü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREENSHOT_DIRECTORY,
   "Ekran görüntüleri için kullanılacak dizin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_AUTOCONFIG_DIR,
   "Giriş Otomatik Yapılandırması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_AUTOCONFIG_DIR,
   "Bir oyun kolu takılıysa, bu dizinde dosyaya karşılık gelen bir yapılandırma dosyası varsa, o oyun kolu otomatik olarak yapılandırılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAPPING_DIRECTORY,
   "Girişi Yeniden Yapılandır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAPPING_DIRECTORY,
   "Tüm yeniden yapılandırılan kontrolleri bu dizine kaydeder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_DIRECTORY,
   "Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_DIRECTORY,
   "Tüm oynatma listelerini bu dizine kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUNTIME_LOG_DIRECTORY,
   "Çalışma Zamanı Günlük"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUNTIME_LOG_DIRECTORY,
   "Oynatma zamanı günlük dosyalarını bu dizine kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILE_DIRECTORY,
   "Kayıt Dosyası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILE_DIRECTORY,
   "Tüm kaydetme dosyalarını bu dizine kaydedin. Ayarlanmamışsa, içerik dosyasının çalışma dizinine kaydetmeye çalışır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_DIRECTORY,
   "Durum Kaydedici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_DIRECTORY,
   "Tüm konum kaydetmeleri bu dizine kaydedin. Ayarlanmamışsa, içerik dosyasının çalışma dizinine kaydetmeye çalışır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CACHE_DIRECTORY,
   "Önbellek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CACHE_DIRECTORY,
   "Bir dizine ayarlanırsa, geçici olarak çıkartılan içerik (örneğin arşivlerden) bu dizine çıkarılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_DIR,
   "Sistem Olay Günlükleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_DIR,
   "Sistem olay günlüğü dosyalarını bu dizine kaydet."
   )

/* Music */

/* Music > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER,
   "Miksere Ekle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER,
   "Ses parçasını kullanılabilir bir ses akışı yuvasına ekleyin. Şu anda mevcut slot bulunmuyorsa, dikkate alınmaz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_PLAY,
   "Miksere Ekle ve Oynat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER_AND_PLAY,
   "Ses parçasını kullanılabilir bir ses akışı yuvasına ekleyin ve oynatın. Şu anda mevcut slot bulunmuyorsa, dikkate alınmaz."
   )

/* Netplay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_HOSTING_SETTINGS,
   "Ana bilgisayar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_CLIENT,
   "Netplay Sunucusuna Bağlan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_CLIENT,
   "Netplay sunucu adresini gir ve istemci kipinde bağlan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISCONNECT,
   "Netplay Sunucusuyla Bağlantıyı Kes"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_DISCONNECT,
   "Aktif bir Netplay bağlantısını keser."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REFRESH_ROOMS,
   "Oda Listesini Yenile"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REFRESH_ROOMS,
   "Yeni odalar için tarayın."
   )

/* Netplay > Host */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_HOST,
   "Netplay Sunucusu Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_HOST,
   "Ana bilgisayar (sunucu) kipinde netplay'i etkinleştirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISABLE_HOST,
   "Netplay Sunucusu Durdur"
   )

/* Import content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_DIRECTORY,
   "Dizin Tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_DIRECTORY,
   "Uyumlu içerik için bir dizin tarar. Bulunduğunda, içerik oynatma listesine eklenir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_THIS_DIRECTORY,
   "<Bu Dizini Tara>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_FILE,
   "Dosya Tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_FILE,
   "Uyumlu içerik için bir dosyayı tarar. Bulunduğunda, içerik oynatma listesine eklenir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_LIST,
   "Elle Tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_LIST,
   "İçerik dosyası adlarına dayalı yapılandırılabilir tarama. Veritabanına uygun içerik gerektirmez."
   )

/* Import content > Scan File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION,
   "Miksere Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION_AND_PLAY,
   "Miksere Ekle ve Oynat"
   )

/* Import content > Manual Scan */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DIR,
   "İçerik Dizini"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DIR,
   "İçerik taramak için bir dizin seçer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Sistem Adı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Taranan içeriğin ilişkilendirileceği bir 'sistem adı' belirtin. Oluşturulan çalma listesi dosyasına ad vermek ve çalma listesi küçük resimlerini tanımlamak için kullanılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "Özel Sistem Adı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "Taranan içerik için manuel olarak bir 'sistem adı' belirtin. Yalnızca 'Sistem Adı' '<Özel>' olarak ayarlandığında kullanılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Taranan içeriği başlatırken kullanılacak varsayılan bir çekirdek seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "Dosya Uzantıları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "Taramaya dahil edilecek dosya türlerinin alanla sınırlı listesi. Boşsa, tüm dosyaları içerir - veya bir çekirdek belirtilirse, çekirdek tarafından desteklenen tüm dosyalar geçerli olur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "İç Arşivleri Tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "Etkinleştirildiğinde, arşiv dosyaları (.zip, .7z, vb.) Geçerli/desteklenen içerik aranacaktır. Tarama performansı üzerinde önemli bir etkisi olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Oyun Makinesi DAT Dosyası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Taranan arcade içeriğinin (MAME, FinalBurn Neo, vb.) Otomatik olarak adlandırılmasını etkinleştirmek için bir Logiqx veya MAME List XML DAT dosyası seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE_FILTER,
   "Oyun Makinesi DAT Filtresi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DAT_FILE_FILTER,
   "Bir oyun makinesi DAT dosyası kullanırken, sadece eşleşen bir DAT dosya girişi bulunursa oynatma listesine içerik ekle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Mevcut Çalma Listesinin Üzerine Yaz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Etkinleştirildiğinde, içerik taramadan önce mevcut tüm çalma listeleri silinir. Devre dışı bırakıldığında, mevcut çalma listesi girişleri korunur ve yalnızca çalma listesinden eksik olan içerik eklenir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_START,
   "Taramayı Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_START,
   "Seçilen içeriği tarayın."
   )

/* Playlist > Playlist Item */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN,
   "Çalıştır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN,
   "İçeriği çalıştır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RENAME_ENTRY,
   "Yeniden Adlandır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RENAME_ENTRY,
   "Girdi başlığını yeniden adlandır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_ENTRY,
   "Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_ENTRY,
   "Bu girişi oynatma listesinden kaldır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES_PLAYLIST,
   "Sık Kullanılanlara Ekle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES_PLAYLIST,
   "Girişi sık kullanılanlara ekle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SET_CORE_ASSOCIATION,
   "Çekirdek Eşleşmesi Ayarla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_CORE_ASSOCIATION,
   "Çekirdek Eşleşmesini Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION,
   "Bilgi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION,
   "İçerikle ilgili daha fazla bilgi görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "Küçük Resimleri İndir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "Mevcut içerik için ekran görüntüsü/kutu resmi/başlık ekranı küçük resimleri indirin. Mevcut tüm küçük resimleri günceller."
   )

/* Playlist Item > Set Core Association */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DETECT_CORE_LIST_OK_CURRENT_CORE,
   "Mevcut çekirdek"
   )

/* Playlist Item > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LABEL,
   "İsim"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_PATH,
   "Dosya Yolu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CORE_NAME,
   "Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_RUNTIME,
   "Oynama Süresi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LAST_PLAYED,
   "Son Oynama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_DATABASE,
   "Veritabanı"
   )

/* Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME_CONTENT,
   "Devam et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME_CONTENT,
   "Çalışmakta olan içeriği devam ettirin ve Hızlı Menüden çıkın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_CONTENT,
   "Yeniden Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_CONTENT,
   "İçeriği baştan yeniden başlatır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOSE_CONTENT,
   "İçeriği Kapat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOSE_CONTENT,
   "Geçerli içeriği kapatır. Kaydedilmemiş değişiklikler kaybolabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TAKE_SCREENSHOT,
   "Ekran Görüntüsü Al"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TAKE_SCREENSHOT,
   "Ekranın görüntüsünü yakalar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATE_SLOT,
   "Durum Yuvası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATE_SLOT,
   "Seçili durum yuvasını değiştirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_STATE,
   "Durum Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_STATE,
   "Seçili yuvaya konumu kaydedin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_STATE,
   "Durum Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_STATE,
   "Seçili yuvadan kaydedilmiş konumu yükleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_LOAD_STATE,
   "Yükleme Durumunu Geri Al"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_LOAD_STATE,
   "Bir durum yüklendiyse, içerik yüklenmeden önceki duruma geri döner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_SAVE_STATE,
   "Durumu Kaydetmeyi Geri Al"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_SAVE_STATE,
   "Bir durumun üzerine yazılmışsa, önceki kaydetme durumuna geri döner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES,
   "Sık Kullanılanlara Ekle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES,
   "Girişi sık kullanılanlara ekle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_RECORDING,
   "Kaydı Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_RECORDING,
   "Kayıt yapmayı başlatır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_RECORDING,
   "Kaydı Durdur"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_RECORDING,
   "Kaydı durdurur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_STREAMING,
   "Yayın Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_STREAMING,
   "Yayın başlatır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_STREAMING,
   "Yayını Durdur"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_STREAMING,
   "Yayını durdurur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS,
   "Seçenekler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS,
   "Çalışmakta olan içeriğin seçeneklerini değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS,
   "Kontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INPUT_REMAPPING_OPTIONS,
   "Çalışmakta olan içerik için kontrolleri değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CHEAT_OPTIONS,
   "Hileler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CHEAT_OPTIONS,
   "Hile kodlarını ayarla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_OPTIONS,
   "Disk Kontrolü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_OPTIONS,
   "Disk kalıbı yönetimi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_OPTIONS,
   "Gölgeler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_OPTIONS,
   "Görüntüyü görsel geliştirmek için gölgelendiricileri ayarlayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_OVERRIDE_OPTIONS,
   "Üzerine yazmalar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_OVERRIDE_OPTIONS,
   "Genel yapılandırmanın üzerine yazma seçenekleri."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST,
   "Başarılar"
   )

/* Quick Menu > Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_CREATE,
   "Oyun Seçenekleri Dosyası Oluştur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_IN_USE,
   "Oyun Seçenekleri Dosyası Kaydet"
   )

/* Quick Menu > Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_LOAD,
   "Yeniden Yapılandırma Dosyasını Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CORE,
   "Çekirdek Yapılandırma Dosyasını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CORE,
   "Çekirdek Yeniden Yapılandırma Dosyasını Sil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CONTENT_DIR,
   "İçerik Dizini Yeniden Yapılandırma Dosyasını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CONTENT_DIR,
   "Oyun İçerik Dizini Yeniden Yapılandırma Dosyasını Sil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_GAME,
   "Oyun Yeniden Yapılandırma Dosyasını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_GAME,
   "Oyun Yeniden Yapılandırma Dosyasını Sil"
   )

/* Quick Menu > Controls > Load Remap File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE,
   "Yeniden Yapılandırma Dosyası"
   )

/* Quick Menu > Cheats */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_CONT,
   "Hile Aramaya Başla veya Devam Et"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD,
   "Hile Dosyası Yükle (Değiştir)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD,
   "Hile dosyası yükleyin ve mevcut hileleri değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD_APPEND,
   "Hile Dosyası Yükle (Ekle)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD_APPEND,
   "Hile dosyası yükleyin ve mevcut hilelere ekleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RELOAD_CHEATS,
   "Oyuna Özel Hileleri Yeniden Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_SAVE_AS,
   "Hile Dosyasını Farklı Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_SAVE_AS,
   "Geçerli hileleri bir kaydetme dosyası olarak kaydedin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_TOP,
   "Üste Yeni Kod Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BOTTOM,
   "Alta Yeni Kod Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_ALL,
   "Tüm Kodları Sil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_LOAD,
   "Oyun Yüklenirken Hileleri Otomatik Uygula"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_LOAD,
   "Oyun yüklendiğinde hileleri otomatik olarak uygula."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_TOGGLE,
   "Geçiş Sonrası Uygula"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_TOGGLE,
   "Geçiş yaptıktan hemen sonra hileyi uygula."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_CHANGES,
   "Değişiklikleri Uygula"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_CHANGES,
   "Hile değişiklikleri derhal işleme girecektir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT,
   "Hile"
   )

/* Quick Menu > Cheats > Start or Continue Cheat Search */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_RESTART,
   "Hile Aramasını Başlat veya Yeniden Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_OR_RESTART,
   "Bit boyutunu değiştirmek için Sol/Sağ yapın"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BIG_ENDIAN,
   "Düşük Son Haneli"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_BIG_ENDIAN,
   "Yüksek son haneli  : 258 = 0x0102,\nDüşük son haneli : 258 = 0x0201"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EXACT,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EXACT,
   "Değeri değiştirmek için Sol/Sağ yap"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EXACT_VAL,
   "Eşittir %u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LT,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LT_VAL,
   "Öncekinden Daha Az"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LTE,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LTE_VAL,
   "Öncekinden Küçüktür veya Eşittir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GT,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GT_VAL,
   "Öncekinden Büyüktür"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GTE,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GTE_VAL,
   "Öncekinden Büyüktür veya Eşittir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQ,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQ_VAL,
   "Öncekine Eşittir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_NEQ,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_NEQ_VAL,
   "Öncekine Eşit Değildir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQPLUS,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQPLUS,
   "Değeri değiştirmek için Sol/Sağ yap"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQPLUS_VAL,
   "Öncekine Eşittir +%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQMINUS,
   "Bellekte Değerleri Ara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQMINUS,
   "Değeri değiştirmek için Sol/Sağ yap"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQMINUS_VAL,
   "Öncekine Eşittir -%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_MATCHES,
   "%u Eşleşmeyi Listenize Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_MATCH,
   "Eşleşmeyi Sil #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_MATCH,
   "Kod Eşleşmesi Oluştur #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH,
   "Eşleşme Adresi: %08X Maske: %02X"
   )

/* Quick Menu > Cheats > Load Cheat File (Replace) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE,
   "Hile Dosyası"
   )

/* Quick Menu > Cheats > Load Cheat File (Append) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_APPEND,
   "Hile Dosyası (Ekle)"
   )

/* Quick Menu > Cheats > Cheat Details */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DETAILS_SETTINGS,
   "Hile Ayrıntıları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_IDX,
   "İndeks"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_IDX,
   "Listedeki dizin konumu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_STATE,
   "Etkin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DESC,
   "Açıklama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_HANDLER,
   "İşleyici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MEMORY_SEARCH_SIZE,
   "Bellek Arama Boyutu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_TYPE,
   "Tür"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VALUE,
   "Değer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS,
   "Bellek Adresi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BROWSE_MEMORY,
   "Adrese Göz At: %08X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS_BIT_POSITION,
   "Bellek Adresi Maskesi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_ADDRESS_BIT_POSITION,
   "ABellek Arama Boyutu <8-bit olduğunda adres bit maskesi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_COUNT,
   "Yineleme Sayısı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_COUNT,
   "Hilenin kaç kez uygulanacağı.\nGeniş bellek alanlarını etkilemek için diğer iki Yineleme seçeneğiyle birlikte kullanın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Her Tekrarlamada Adresi Arttır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Her “Yineleme Sayısı” ndan sonra Hafıza Adresi, bu sayı ile “Hafıza Arama Boyutu” ile artacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_VALUE,
   "Her Tekrarlamada Değer Artırma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_VALUE,
   "Her “İterasyon Sayısı” ndan sonra, Değer bu miktar kadar artacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_TYPE,
   "Titreşim Belleği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_VALUE,
   "Titreşim Değeri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PORT,
   "Titreşim Portu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_STRENGTH,
   "Birincil Titreşim Gücü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_DURATION,
   "Birincil Titreşim Süresi (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_STRENGTH,
   "İkincil Titreşim Gücü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_DURATION,
   "İkincil Titreşim Süresi (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CODE,
   "Kod"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_AFTER,
   "Bundan Sonra Yeni Hile Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BEFORE,
   "Bundan Önce Yeni Hile Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_AFTER,
   "Bu Hileyi Sonrasına Kopyala"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_BEFORE,
   "Bu Hile Öncesinde Kopyala"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE,
   "Bu Hileyi Sil"
   )

/* Quick Menu > Disc Control */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_EJECT,
   "Diski Çıkar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_EJECT,
   "Sanal disk tepsisini açar ve şu anda yüklü olan diski kaldırır. NOT: RetroArch, menü etkinken duraklatmak üzere yapılandırılmışsa, içerik her disk kontrolü eyleminden sonra birkaç saniye boyunca devam ettirilmedikçe bazı çekirdekler değişiklikleri kaydetmeyebilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_INSERT,
   "Diski Tak"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_INSERT,
   "'Mevcut Disk İndeksi'ne karşılık gelen disk ekler ve sanal disk tepsisini kapatır. NOT: RetroArch, menü etkinken duraklatmak üzere yapılandırılmışsa, içerik her disk kontrolü eyleminden sonra birkaç saniye boyunca devam ettirilmedikçe bazı çekirdekler değişiklikleri kaydetmeyebilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_IMAGE_APPEND,
   "Yeni Disk Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_IMAGE_APPEND,
   "Mevcut diski çıkarın, dosya sisteminden yeni bir disk seçin, sonra takın ve sanal disk tepsisini kapatın. NOT: Bu eski bir özellik. Bunun yerine, 'Diski Çıkar/Tak' ve 'Mevcut Disk İndeksi' seçeneklerini kullanarak disk seçimine izin veren M3U çalma listeleri aracılığıyla çok diskli başlıkların yüklenmesi önerilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_INDEX,
   "Mevcut Disk Dizini"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_INDEX,
   "Kullanılabilir resimler listesinden geçerli diski seçin. 'Disk Ekle' seçildiğinde disk yüklenecektir."
   )

/* Quick Menu > Shaders */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADERS_ENABLE,
   "Video Gölgelendirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_WATCH_FOR_CHANGES,
   "Değişiklikler için Gölgelendirici Dosyalarını İzle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_WATCH_FOR_CHANGES,
   "Diskteki gölgelendirici dosyalarında yapılan değişiklikleri otomatik uygula."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET,
   "Ön Tanımlı Gölgelendirici Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET,
   "Gölgelendirici önayarı yükleyin. Gölgelendirici düzeni otomatik olarak kurulacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE,
   "Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE,
   "Mevcut gölgelendirici ön ayarını kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE,
   "Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE,
   "Belirli bir türdeki gölgelendirici hazır ayarlarını kaldır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_APPLY_CHANGES,
   "Değişiklikleri Uygula"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_APPLY_CHANGES,
   "Gölgelendirici yapılandırmasındaki değişiklikler hemen geçerli olur. Gölgelendirici geçişi, filtreleme, FBO ölçeği vb. Miktarını değiştirdiyseniz bunu kullanın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PARAMETERS,
   "Gölgelendirici Parametreleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PARAMETERS,
   "Geçerli gölgelendiriciyi doğrudan değiştirir. Değişiklikler önceden ayarlanmış dosyaya kaydedilmeyecek."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_NUM_PASSES,
   "Gölgelendirici Geçişleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_NUM_PASSES,
   "Gölgelendirici hattı geçiş miktarını artırın veya azaltın. Her hat geçişine ayrı bir gölgelendirici bağlayabilir ve ölçeğini ve filtrelemesini yapılandırabilirsiniz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER,
   "Gölge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILTER,
   "Filtre"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCALE,
   "Ölçek"
   )

/* Quick Menu > Shaders > Save */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_AS,
   "Gölgelendirici Hazır Ayarını Farklı Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_AS,
   "Mevcut gölgelendirici ayarlarını yeni bir gölgelendirici hazır ayarı olarak kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "Genel Ön Ayarı Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "Mevcut gölgelendirici ayarlarını varsayılan genel ayar olarak kaydet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_CORE,
   "Çekirdek Hazır Ayarını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_CORE,
   "Geçerli gölgelendirici ayarlarını, uygulama/çekirdek için varsayılan ayarlar olarak kaydedin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "İçerik Dizini Ön Ayarını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "Geçerli gölgelendirici ayarlarını, geçerli içerik dizinindeki tüm dosyalar için varsayılan ayarlar olarak kaydedin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GAME,
   "Oyun Ön Ayarını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GAME,
   "Geçerli gölgelendirici ayarlarını içerik için varsayılan ayarlar olarak kaydedin."
   )

/* Quick Menu > Shaders > Remove */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PRESETS_FOUND,
   "Otomatik Gölgelendirici Hazır Ayarı Bulunamadı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "Genel Hazır Ayarları Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "Tüm içerik ve tüm çekirdekler tarafından kullanılan Genel Hazır Ayarı kaldırın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "Çekirdek Hazır Ayarını Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "Şu anda yüklü olan çekirdekle çalışan tüm içerikler tarafından kullanılan Çekirdek Hazır Ayarını kaldırın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "İçerik Dizini Hazır Ayarını Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "Geçerli çalışma dizini içindeki tüm içerik tarafından kullanılan İçerik Dizini Hazır Ayarını kaldırın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "Oyunu Hazır Ayarı Kaldır"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "Yalnızca söz konusu oyun için kullanılan Oyun Ön Ayarını kaldırın."
   )

/* Quick Menu > Shaders > Shader Parameters */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SHADER_PARAMETERS,
   "Gölgelendirici Parametresi Yok"
   )

/* Quick Menu > Overrides */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Çekirdeğin Üzerine Yazılanları Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Çekirdekte yüklü olan tüm içerik için geçerli olacak bir üzerine yazma dosyasını kaydeder. Ana yapılandırmadan öncelikli olacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "İçerik Dizini Geçersiz Kılmalarını Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Mevcut dosyayla aynı dizinden yüklenen tüm içerik için geçerli olacak üzerine yapılandırma dosyasını kaydeder. Ana yapılandırmadan öncelikli olacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Oyunun Üzerine Yazılanları Kaydet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Yalnızca mevcut içerik için üzerine yazma yapılandırma dosyasını kaydeder. Ana yapılandırmadan öncelikli olacaktır."
   )

/* Quick Menu > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ACHIEVEMENTS_TO_DISPLAY,
   "Gösterilecek Başarı Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE,
   "Zorlu Kipte Başarıları Duraklat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_PAUSE,
   "Mevcut oturum için başarıları duraklat (Bu işlem durum kayıtları, hileleri, geri sarma, duraklatma ve ağır çekimi etkinleştirir)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME,
   "Zorlu Kipte Başarılara Devam Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_RESUME,
   "Mevcut oturum için başarıları sürdür (Bu işlem durum kayıtları, hileleri, geri sarma, duraklatma ve ağır çekimi devre dışı bırakır ve mevcut oyunu sıfırlar)."
   )

/* Quick Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CHEEVOS_HASH,
   "RetroAchievements Sağlaması"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DETAIL,
   "Veritabanı Girişi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RDB_ENTRY_DETAIL,
   "Mevcut içerik için veritabanı bilgilerini göster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ENTRIES_TO_DISPLAY,
   "Görüntülenecek Giriş Yok"
   )

/* Miscellaneous UI Items */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORES_AVAILABLE,
   "Kullanılabilir Çekirdek Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_OPTIONS_AVAILABLE,
   "Çekirdek Seçenekleri Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_INFORMATION_AVAILABLE,
   "Çekirdek Bilgisi Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_FAVORITES_AVAILABLE,
   "Sık Kullanılan Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_HISTORY_AVAILABLE,
   "Geçmiş Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_IMAGES_AVAILABLE,
   "Kullanılabilir Resim Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_MUSIC_AVAILABLE,
   "Kullanılabilir Müzik Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_VIDEOS_AVAILABLE,
   "Kullanılabilir Video Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_INFORMATION_AVAILABLE,
   "Bilgi Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLIST_ENTRIES_AVAILABLE,
   "Oynatma Listesi Girişi Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SETTINGS_FOUND,
   "Ayar Bulunamadı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETWORKS_FOUND,
   "Ağ Bulunamadı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE,
   "Çekirdek Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SEARCH,
   "Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_BACK,
   "Geri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_OK,
   "Tamam"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PARENT_DIRECTORY,
   "Ana Dizin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NOT_FOUND,
   "Dizin Bulunamadı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ITEMS,
   "Öge Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FILE,
   "Dosya Seç"
   )

/* Settings Options */

MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_UNKNOWN_COMPILER,
   "Bilinmeyen derleyici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_OR,
   "Paylaş"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_XOR,
   "Tutun"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_VOTE,
   "Oyla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG,
   "Analog Giriş Paylaşımı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_MAX,
   "Azami"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_AVERAGE,
   "Ortalama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NONE,
   "Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NO_PREFERENCE,
   "Tercih yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_BOUNCE,
   "Sola/Sağa Sıçrama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_LOOP,
   "Sola Kaydır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_IMAGE_MODE,
   "Görüntü Kipi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SPEECH_MODE,
   "Konuşma Kipi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_NARRATOR_MODE,
   "Ekran Okuyucusu Kipi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_HIST_FAV,
   "Geçmiş & Sık Kullanılanlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_ALL,
   "Tüm Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_NONE,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_HIST_FAV,
   "Geçmiş & Sık Kullanılanlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_ALWAYS,
   "Daima"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_NEVER,
   "Asla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_PER_CORE,
   "Çekirdek Başına"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_AGGREGATE,
   "Toplam"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGED,
   "Şarj oldu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGING,
   "Şarj oluyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_DISCHARGING,
   "Şarjı tükeniyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_NO_SOURCE,
   "Kaynak yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_THIS_DIRECTORY,
   "<Bu Dizini Kullan>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_CONTENT,
   "<İçerik Dizini>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_DEFAULT,
   "<Varsayılan>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NONE,
   "<Yok>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NONE,
   "Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN,
   "Bilinmiyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_START,
   "Start'a Basılı Tut (2 saniye)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_SELECT,
   "Aşağı + Seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DISABLED,
   "<Devre dışı>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_CHANGES,
   "Değişiklikler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DOES_NOT_CHANGE,
   "Değiştirilemez"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE,
   "Arttırır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE,
   "Azalt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_EQ_VALUE,
   "= Titreşim Değeri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_NEQ_VALUE,
   "!= Titreşim Değeri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_LT_VALUE,
   "< Titreşim Değeri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_GT_VALUE,
   "> Titreşim Değeri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE_BY_VALUE,
   "Titreşim Değerini Arttır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE_BY_VALUE,
   "Titreşim Değerini Azalt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_PORT_16,
   "Tümü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DISABLED,
   "<Devre dışı>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_SET_TO_VALUE,
   "Değere Ayarla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_INCREASE_VALUE,
   "Değere Göre Arttır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DECREASE_VALUE,
   "Değere Göre Düşür"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_EQ,
   "Sonraki Hileyi Çalıştır Değer = Bellek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_NEQ,
   "Sonraki Hileyi Çalıştır Değer != Bellek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_LT,
   "Sonraki Hileyi Çalıştır Değer < Bellek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_GT,
   "Sonraki Hileyi Çalıştır Değer > Bellek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_HANDLER_TYPE_EMU,
   "Emülatör"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_1,
   "1-Bit, Azami Değer = 0x01"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_2,
   "2-Bit, Azami Değer = 0x03"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_4,
   "4-Bit, Azami Değer = 0x0F"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_8,
   "8-Bit, Azami Değer = 0xFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_16,
   "16-Bit, Azami Değer = 0xFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_32,
   "32-Bit, Azami Değer = 0xFFFFFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_DEFAULT,
   "Sistem Varsayılanı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_ALPHABETICAL,
   "Alfabetik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_OFF,
   "Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_DEFAULT,
   "Etiketleri Tam Göster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS,
   "Kaldır () İçerik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_BRACKETS,
   "Kaldır [] İçerik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS_AND_BRACKETS,
   "Kaldır () ve []"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION,
   "Bölgeyi Sakla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_DISC_INDEX,
   "Disk İndeksini Sakla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION_AND_DISC_INDEX,
   "Bölge ve Disk İndeksini Sakla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_THUMBNAIL_MODE_DEFAULT,
   "Sistem Varsayılanı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_BOXARTS,
   "Kapak Resmi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_SCREENSHOTS,
   "Ekran Görüntüleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_TITLE_SCREENS,
   "Açılış Ekranları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCROLL_FAST,
   "Hızlı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ON,
   "AÇIK"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OFF,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YES,
   "Evet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO,
   "Hayır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TRUE,
   "Doğru"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FALSE,
   "Yanlış"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLED,
   "Etkin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISABLED,
   "Devre dışı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_AVAILABLE,
   "Boş"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LOCKED_ENTRY,
   "Kilitli"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY,
   "Açılmış"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY_HARDCORE,
   "Zorlayıcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNOFFICIAL_ENTRY,
   "Resmi Olmayan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNSUPPORTED_ENTRY,
   "Desteklenmiyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DONT_CARE,
   "Dikkate alma"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LINEAR,
   "Doğrusal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEAREST,
   "En yakın"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CONTENT_DIR,
   "<İçerik Dizini>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CUSTOM,
   "<Özel>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME_DETECT,
   "<Belirtilmemiş>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG,
   "Sol Analog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG,
   "Sağ Analog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEY,
   "(Tuş: %s)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_LEFT,
   "Fare 1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_RIGHT,
   "Fare 2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_MIDDLE,
   "Fare 3"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON4,
   "Fare 4"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON5,
   "Fare 5"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_UP,
   "Tekerlek Yukarı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_DOWN,
   "Tekerlek Aşağı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_UP,
   "Tekerlek Sola"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_DOWN,
   "Tekerlek Sağa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_EARLY,
   "Erken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_LATE,
   "Geç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS,
   "YYYY-AA-GG SS:DD:SN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM,
   "YYYY-AA-GG SS:DD"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD,
   "YYYY-AA-GG"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YM,
   "YYYY-AA"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS,
   "AA-GG-YYYY SS:DD:SN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM,
   "AA-GG-YYYY SS:DD"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM,
   "AA-GG SS:DD"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY,
   "AA-GG-YYYY"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD,
   "AA-GG"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS,
   "GG-AA-YYYY SS:DD:SN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM,
   "GG-AA-YYYY SS:DD"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM,
   "GG-AA SS:DD"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY,
   "GG-AA-YYYY"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM,
   "GG-AA"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HMS,
   "SS:DD:SN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HM,
   "SS:DD"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS_AMPM,
   "YYYY-AA-GG SS:DD:SN (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM_AMPM,
   "YYYY-AA-GG SS:DD (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS_AMPM,
   "AA-GG-YYYY SS:DD:SN (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM_AMPM,
   "AA-GG-YYYY SS:DD (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM_AMPM,
   "AA-GG SS:DD (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS_AMPM,
   "GG-AA-YYYY SS:DD:SN (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM_AMPM,
   "GG-AA-YYYY SS:DD (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM_AMPM,
   "GG-AA SS:DD (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HMS_AMPM,
   "SS:DD:SN (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HM_AMPM,
   "SS:DD (AM/PM)"
   )

/* RGUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Arkaplan Dolgu Kalınlığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Menü arka plan dama tahtası deseninin kalınlığını artır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Kenar Dolgusu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Kenar Dolgu Kalınlığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Menü kenarlığı dama tahtası kalınlığını arttır."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Menü kenarlığını görüntüle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Tam Genişlik Düzeni Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Kullanılabilir ekran alanını en iyi şekilde kullanmak için menü girişlerini yeniden boyutlandır ve yerleştir. Klasik sabit genişlikte iki sütun düzenini kullanmak için bunu devre dışı bırakın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_LINEAR_FILTER,
   "Menü Doğrusal Süzgeç"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_LINEAR_FILTER,
   "Sert piksel kenarını yumuşatmak için menüye hafif bir bulanıklık ekler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Dahili Ölçek Yükseltici"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Ekrana vermeden önce menü arayüzü yeniden ölçeklenir. 'Menü Doğrusal Filtre' etkinken kullanıldığında, keskin bir görüntüyü korurken ölçek arka plan efektlerini (düzensiz pikseller) kaldırır. Yükseltme seviyesiyle birlikte önemli bir eksi performans etkisi vardır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO,
   "Menü En Boy Oranı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO,
   "Menü en boy oranını seç. Geniş ekran oranları, menü arayüzünün yatay çözünürlüğünü arttırır. ('Menü En Boy Oranını Kilitle' devre dışı bırakılmışsa yeniden başlatmayı gerektirebilir)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Menü En Boy Oranını Kilitle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Menünün her zaman doğru en boy oranıyla görüntülenmesini sağlar. Devre dışı bırakılırsa, hızlı menü geçerli yüklü içerikle eşleşecek şekilde genişletilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME,
   "Menü Renk Teması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_COLOR_THEME,
   "Farklı bir renk teması seçin. 'Özel' seçimi, menü teması önceden ayarlanmış dosyaların kullanımını mümkün kılar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_THEME_PRESET,
   "Özel Menü Teması Ön Ayarı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_THEME_PRESET,
   "Dosya tarayıcısından hazır bir menü teması seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SHADOWS,
   "Gölge Efektleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SHADOWS,
   "Menü metni, kenarlıklar ve küçük resimler için alt gölgeleri etkinleştirin. Performansa düşük oranda eksi etkisi var."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT,
   "Arkaplan Animasyonu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT,
   "Arka plan parçacık animasyon efektini etkinleştir. Performans üzerinde olumsuz etkisi olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Arkaplan Animasyon Hızı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Arka plan parçacık animasyon efektlerinin hızını ayarla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INLINE_THUMBNAILS,
   "Oynatma Listesi Küçük Resimlerini Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INLINE_THUMBNAILS,
   "Oynatma listelerini görüntülerken satır içi küçültülmüş küçük resimlerin görüntülenmesini etkinleştir. Devre dışı bırakıldığında, 'Üst Küçük Resim' RetroPad Y düğmesine basılarak tam ekran olarak değiştirilebilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_RGUI,
   "Üst Küçük Resim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_RGUI,
   "Oynatma listelerinin sağ üst köşesinde görüntülenecek küçük resim türü. Bu küçük resim, RetroPad Y düğmesine basılarak tam ekrana getirilebilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_RGUI,
   "Alt Küçük Resim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_RGUI,
   "Oynatma listelerinin sağ alt kısmında gösterilecek küçük resim türü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWAP_THUMBNAILS,
   "Küçük Resimlerin Yerini Değiş"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWAP_THUMBNAILS,
   "'Üst Küçük Resim' ve 'Alt Küçük Resim' ekran konumlarını değiştirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Küçük Resim Ölçeklendirme Yöntemi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Büyük küçük resimleri ekrana sığdırmak için küçültürken yeniden örnekleme yöntemi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DELAY,
   "Küçük Resim Gecikmesi (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DELAY,
   "Bir oynatma listesi girişi seçme ile ilişkili küçük resimlerini yükleme arasında bir gecikme süresi uygular. Bunu en az 256 ms değerine ayarlamak, en yavaş cihazlarda bile hızlı gecikmesiz kaydırmayı mümkün kılar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_EXTENDED_ASCII,
   "Genişletilmiş ASCII Desteği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_EXTENDED_ASCII,
   "Standart olmayan ASCII karakterlerinin görüntülenmesini etkinleştir. İngilizce dışındaki bazı Batı dillerine uyumluluk için gereklidir. Orta düzeyde performans etkisi vardır."
   )

/* RGUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_POINT,
   "En Yakın İlişki (Hızlı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_BILINEAR,
   "İkili Doğrusal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_SINC,
   "Sinc/Lanczos3 (Yavaş)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_NONE,
   "Yok"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_AUTO,
   "Otomatik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_9_CENTRE,
   "16:9 (Ortalanmış)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_10_CENTRE,
   "16:10 (Ortalanmış)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_NONE,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FIT_SCREEN,
   "Ekrana Sığdır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_INTEGER,
   "Tam Sayı Ölçeği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FILL_SCREEN,
   "Ekranı Doldur (Uzatılmış)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CUSTOM,
   "Özel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_RED,
   "Klasik Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_ORANGE,
   "Klasik Turuncu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_YELLOW,
   "Klasik Sarı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREEN,
   "Klasik Yeşil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_BLUE,
   "Klasik Mavi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_VIOLET,
   "Klasik Menekşe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREY,
   "Klasik Gri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LEGACY_RED,
   "Eski Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_DARK_PURPLE,
   "Koyu Mor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Gece Mavisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GOLDEN,
   "Altın"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrik Mavisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_APPLE_GREEN,
   "Elma Yeşili"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_VOLCANIC_RED,
   "Volkanik Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LAGOON,
   "Gölcük"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_DRACULA,
   "Drakula"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_FAIRYFLOSS,
   "Pamuk Şeker"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_FLATUI,
   "Düz Arayüz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Koyu Gruvbox"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_LIGHT,
   "Açık Gruvbox"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_HACKING_THE_KERNEL,
   "Kırık Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_NORD,
   "Kuzey"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_ONE_DARK,
   "Bir Koyuluk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_PALENIGHT,
   "Soluk Gece"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarize Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_LIGHT,
   "Solarize Aydınlık"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_DARK,
   "Tango Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_LIGHT,
   "Tango Aydınlık"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_NONE,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW,
   "Kar (Hafif)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW_ALT,
   "Kar (Yoğun)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_RAIN,
   "Yağmur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_VORTEX,
   "Girdap"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_STARFIELD,
   "Yıldız Alanı"
   )

/* XMB: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS,
   "Sol Küçük Resimler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS,
   "Solda görüntülenecek küçük resim türü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPER,
   "Dinamik Arkaplan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPER,
   "Bağlama göre dinamik olarak yeni bir duvar kağıdı yükle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_HORIZONTAL_ANIMATION,
   "Yatay Animasyon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_HORIZONTAL_ANIMATION,
   "Menü için yatay animasyonu etkinleştirin. Performans kaybı etkisi olacaktır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Animasyon Yatay Simge Vurgula"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Sekmeler arasında dolaşırken tetiklenen animasyon."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Yukarı/Aşağı Hareket Etme Animasyonu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Yukarı veya aşağı hareket ederken tetiklenen animasyon."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Ana Menü Animasyonları Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Bir alt menü açarken tetiklenen animasyon."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ALPHA_FACTOR,
   "Menü Alfa Etkeni"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_FONT,
   "Menü Yazı Tipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_FONT,
   "Menü tarafından kullanılacak farklı bir ana yazı tipi seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_RED,
   "Menü Yazı Tipi Rengi (Kırmızı)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_GREEN,
   "Menü Yazı Tipi Rengi (Yeşil)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_BLUE,
   "Menü Yazı Tipi Rengi (Mavi)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_LAYOUT,
   "Menü Düzeni"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_LAYOUT,
   "XMB arayüzü için farklı bir düzen seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_THEME,
   "Menü Simgesi Teması"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_THEME,
   "RetroArch için farklı bir simge teması seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SHADOWS_ENABLE,
   "Simge Gölgeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SHADOWS_ENABLE,
   "Tüm simgeler için alt gölgeler çiz.\nPerformansa küçük bir yük bindirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_RIBBON_ENABLE,
   "Menü Arkaplan Animasyonu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_RIBBON_ENABLE,
   "Animasyonlu bir arka plan efekti seçin. Efektine bağlı olarak GPU-yoğunluğu olabilir. Performans yetersizse, bunu kapatın veya daha basit bir efekte geri dönün."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME,
   "Menü Tema Rengi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MENU_COLOR_THEME,
   "Farklı bir arka plan rengi gradyan teması seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_VERTICAL_THUMBNAILS,
   "Küçük Resimler Dikey Eğilim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_VERTICAL_THUMBNAILS,
   "Soldaki küçük resmi, ekranın sağ tarafında, sağ alt köşesinde görüntüleyin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Küçük Resim Ölçek Etkeni"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "İzin verilen azami genişliği ölçekleyip küçük resim görüntüleme boyutunu küçültün."
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Ayarlar Sekmesi"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_SUBLABEL_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Ayarlar sekmesini etkinleştirir. Sekmenin görünmesi için yeniden başlatma gerekir."
   )

/* XMB: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON,
   "Şerit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON_SIMPLIFIED,
   "Şerit (basitleştirilmiş)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SIMPLE_SNOW,
   "Basit Kar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOW,
   "Kar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_BOKEH,
   "Bulanıklık"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOWFLAKE,
   "Kar tanesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_CUSTOM,
   "Özel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_FLATUI,
   "Düz Arayüz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME,
   "Tek Renk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME_INVERTED,
   "Tek Renk Ters"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_SYSTEMATIC,
   "Sistematik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_NEOACTIVE,
   "NeoAktif"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_PIXEL,
   "Piksel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_RETROACTIVE,
   "RetroAktif"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_RETROSYSTEM,
   "Retrosistem"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_DOTART,
   "Nokta Sanatı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC,
   "Otomatik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC_INVERTED,
   "Otomatik Ters"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_APPLE_GREEN,
   "Elma Yeşili"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK,
   "Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIGHT,
   "Açık"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MORNING_BLUE,
   "Sabah Mavisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_SUNBEAM,
   "Gün Işığı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK_PURPLE,
   "Koyu Mor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrik Mavisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GOLDEN,
   "Altın"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LEGACY_RED,
   "Eski Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Gece Mavisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PLAIN,
   "Sade"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_UNDERSEA,
   "Denizaltı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_VOLCANIC_RED,
   "Volkanik Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIME,
   "Limon Yeşili"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PIKACHU_YELLOW,
   "Pikachu Sarısı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GAMECUBE_PURPLE,
   "Tatlı Mor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_FAMICOM_RED,
   "Kırmızı Ailesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_FLAMING_HOT,
   "Ateşli Sıcak"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ICE_COLD,
   "Buz Soğuğu"
   )

/* Ozone: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLLAPSE_SIDEBAR,
   "Kenar Çubuğunu Daralt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_COLLAPSE_SIDEBAR,
   "Sol kenar çubuğunu daima daralt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Oynatma Listesi Adlarını Kısalt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Etkinleştirildiğinde, sistem adlarını çalma listelerinden kaldırır. Örneğin, 'Sony - PlayStation' yerine 'PlayStation' yazar. Değişikliklerin etkili olması için yeniden başlatmayı gerektirir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Ad Kısaltmasından Sonra Oynatma Listelerini Sırala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Etkinleştirildiğinde, oynatma listeleri adları 'sistem' bileşeni kaldırıldıktan sonra alfabetik olarak yeniden sıralanır. Değişikliklerin geçerli olması için yeniden başlatma gerekir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_MENU_COLOR_THEME,
   "Menü Tema Rengi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_MENU_COLOR_THEME,
   "Farklı bir renk teması seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_WHITE,
   "Temel Beyaz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_BLACK,
   "Temel Siyah"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_NORD,
   "Kuzey"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_OZONE,
   "İkinci Küçük Resim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_OZONE,
   "İçerik meta veri panelini başka bir küçük resim ile değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SCROLL_CONTENT_METADATA,
   "İçerik Üst Verileri İçin Kayan Metin Kullan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SCROLL_CONTENT_METADATA,
   "Etkinleştirildiğinde, çalma listelerinin sağ kenar çubuğunda gösterilen içerik meta verilerinin her bir maddesi (ilişkili çekirdek, çalma süresi) tek bir satır kaplar; Kenar çubuğunun genişliğini aşan dizeler kayan yazı metni olarak görüntülenir. Devre dışı bırakıldığında, içerik meta verilerinin her bir öğesi, gerektiği kadar satır tutacak şekilde kaydırılarak statik olarak görüntülenir."
   )

/* MaterialUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_ICONS_ENABLE,
   "Menü Simgeleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_ICONS_ENABLE,
   "Menü girişlerinin solundaki simgeleri göster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "Yatay Yerleşimi Düzenle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "Yatay ekran yönlerini kullanırken ekrana daha iyi uyacak şekilde menü düzenini otomatik olarak ayarla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_SHOW_NAV_BAR,
   "Gezinti Çubuğunu Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_SHOW_NAV_BAR,
   "Kalıcı ekran menü gezinme kısayollarını görüntüle. Menü kategorileri arasında hızlı geçiş yapılmasını sağlar. Dokunmatik ekranlı cihazlar için önerilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "Gezinme Çubuğunu Otomatik Döndür"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "Yatay görüntü yönlerini kullanırken gezinme çubuğunu ekranın sağ tarafına otomatik olarak taşı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME,
   "Menü Tema Rengi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_COLOR_THEME,
   "Farklı bir arka plan rengi gradyan teması seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "Menü Geçiş Animasyonu"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "Menünün farklı seviyeleri arasında gezinirken yumuşak animasyon efektlerini etkinleştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_PORTRAIT,
   "Dikey Küçük Resim Görünümü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_PORTRAIT,
   "Dikey ekran yönlerini kullanırken oynatma listesi küçük resim görünümü kipini belirtin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "Yatay Küçük Resim Görünümü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "Yatay ekran yönlerini kullanırken oynatma listesi küçük resim görünümü kipini belirtin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "Liste Görünümlerinde İkincil Küçük Resmi Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "'Liste' türü oynatma listesi küçük resim görüntüleme kipini kullanırken ikincil küçük resmin görüntülenmesini sağlar. Bu ayarın yalnızca ekranda iki küçük resim göstermek için yeterli fiziksel genişliğe sahip olduğunda geçerli olduğunu unutmayın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_BACKGROUND_ENABLE,
   "Küçük Resim Arkaplan Çizimi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_THUMBNAIL_BACKGROUND_ENABLE,
   "Sağlam bir arka plana sahip küçük resim görüntülerinde kullanılmayan alanın dolmasını sağlar. Bu, tüm görüntüler için tekdüze bir görüntü boyutu sağlayarak, farklı taban boyutlarına sahip karışık içerikli küçük resimleri görüntülerken menü görünümünü iyileştirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_MATERIALUI,
   "Birincil Küçük Resim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_MATERIALUI,
   "Her oynatma listesi girişiyle ilişkilendirilecek ana küçük resim türü. Genellikle içerik simgesi olarak kullanılır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_MATERIALUI,
   "İkincil Küçük Resim"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_MATERIALUI,
   "Her oynatma listesi girişi ile ilişkilendirilecek yardımcı küçük resim türü. Kullanım, geçerli oynatma listesi küçük resim görüntüleme kipine bağlıdır."
   )

/* MaterialUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE,
   "Mavi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE_GREY,
   "Mavi Gri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_DARK_BLUE,
   "Koyu Mavi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GREEN,
   "Yeşil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_NVIDIA_SHIELD,
   "Kalkan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_RED,
   "Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_YELLOW,
   "Sarı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_MATERIALUI,
   "Malzeme Arayüzü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_MATERIALUI_DARK,
   "Malzeme Arayüzü Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_OZONE_DARK,
   "Ozon Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_NORD,
   "Kuzey"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarize Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_BLUE,
   "Tatlı Mavi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_CYAN,
   "Tatlı Camgöbeği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_GREEN,
   "Tatlı Gri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_ORANGE,
   "Tatlı Turuncu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_PINK,
   "Tatlı Pembe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_PURPLE,
   "Tatlı Mor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_RED,
   "Tatlı Kırmızı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_AUTO,
   "Otomatik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_FADE,
   "Karart"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_SLIDE,
   "Kaydır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_NONE,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DISABLED,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_SMALL,
   "Liste (Küçük)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_MEDIUM,
   "Liste (Orta)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DUAL_ICON,
   "Çift Simge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DISABLED,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_SMALL,
   "Liste (Küçük)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_MEDIUM,
   "Liste (Orta)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_LARGE,
   "Liste (Büyük)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DESKTOP,
   "Masaüstü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_DISABLED,
   "KAPALI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_ALWAYS,
   "AÇIK"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_EXCLUDE_THUMBNAIL_VIEWS,
   "Küçük Resim Görünümlerini Hariç Tut"
   )

/* Qt (Desktop Menu) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFO,
   "Bilgi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE,
   "&Dosya"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_LOAD_CORE,
   "&Çekirdek Yükle..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_UNLOAD_CORE,
   "&Çekirdeği Çıkart"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_EXIT,
   "&Çıkış"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_EDIT,
   "&Düzenle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_EDIT_SEARCH,
   "&Ara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW,
   "&Görünüm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_CLOSED_DOCKS,
   "Kapalı Alanlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_SHADER_PARAMS,
   "Gölgelendirici Parametreleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS,
   "&Ayarlar..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_DOCK_POSITIONS,
   "Yuva konumlarını hatırla:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_GEOMETRY,
   "Pencere geometrisini hatırla:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_LAST_TAB,
   "Son içerik tarayıcı sekmesini hatırla:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME,
   "Tema:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_SYSTEM_DEFAULT,
   "<Sistem Varsayılanı>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_DARK,
   "Koyu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_CUSTOM,
   "Özel..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_TITLE,
   "Ayarlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_TOOLS,
   "&Araçlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP,
   "&Yardım"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT,
   "RetroArch Hakkında"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_DOCUMENTATION,
   "Dokümantasyon"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CUSTOM_CORE,
   "Özel Çekirdek Yükle..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CORE,
   "Çekirdek Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOADING_CORE,
   "Çekirdek Yükleniyor..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NAME,
   "İsim"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_VERSION,
   "Sürüm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_PLAYLISTS,
   "Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER,
   "Dosya Tarayıcısı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_TOP,
   "Üst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_UP,
   "Yukarı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_DOCK_CONTENT_BROWSER,
   "İçerik Tarayıcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_BOXART,
   "Kapak Resmi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_SCREENSHOT,
   "Ekran Görüntüsü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_TITLE_SCREEN,
   "Başlık Ekranı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ALL_PLAYLISTS,
   "Tüm Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE,
   "Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_INFO,
   "Çekirdek Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_SELECTION_ASK,
   "<Sor>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFORMATION,
   "Bilgi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_WARNING,
   "Uyarı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ERROR,
   "Hata"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NETWORK_ERROR,
   "Ağ Hatası"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESTART_TO_TAKE_EFFECT,
   "Değişikliklerin etkili olması için lütfen programı yeniden başlatın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOG,
   "Günlük"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ITEMS_COUNT,
   "%1 öge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DROP_IMAGE_HERE,
   "Resmi buraya sürükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DONT_SHOW_AGAIN,
   "Bunu bir daha gösterme"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_STOP,
   "Durdur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ASSOCIATE_CORE,
   "Bağdaştırılmış Çekirdek"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDDEN_PLAYLISTS,
   "Gizli Oynatma Listeleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDE,
   "Gizle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_HIGHLIGHT_COLOR,
   "Vurgu rengi:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CHOOSE,
   "&Seç..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_COLOR,
   "Renk Seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_THEME,
   "Tema Seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CUSTOM_THEME,
   "Özel Tema"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_PATH_IS_BLANK,
   "Dosya yolu boş."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_IS_EMPTY,
   "Dosya boş."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_READ_OPEN_FAILED,
   "Dosya okumak için açılamadı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_WRITE_OPEN_FAILED,
   "Dosya yazmak için açılamadı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_DOES_NOT_EXIST,
   "Dosya bulunmuyor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SUGGEST_LOADED_CORE_FIRST,
   "Önce yüklü çekirdeği önerin:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ZOOM,
   "Yakınlaştır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW,
   "Görünüm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_ICONS,
   "Simgeler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_LIST,
   "Liste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_SEARCH_CLEAR,
   "Temizle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PROGRESS,
   "İlerleyiş:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_LIST_MAX_COUNT,
   "\"Tüm Oynatma Listeleri\" liste giriş sınırı:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_GRID_MAX_COUNT,
   "\"Tüm Oynatma Listeleri\" ızgara giriş sınırı:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SHOW_HIDDEN_FILES,
   "Gizli dosya ve klasörleri göster:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NEW_PLAYLIST,
   "Yeni Oynatma Listesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ENTER_NEW_PLAYLIST_NAME,
   "Lütfen yeni oynatma listesi adını girin:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE_PLAYLIST,
   "Oynatma Listesini Sil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RENAME_PLAYLIST,
   "Oynatma Listesini Adlandır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST,
   "Oynatma listesini silmek istiyor musunuz \"%1\"?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_QUESTION,
   "Soru"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_DELETE_FILE,
   "Dosya silinemedi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_RENAME_FILE,
   "Dosya yeniden adlandırılamadı."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_GATHERING_LIST_OF_FILES,
   "Dosya listesi toplanıyor..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADDING_FILES_TO_PLAYLIST,
   "Oynatma listesine dosyalar ekleniyor..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY,
   "Oynatma Listesi Girdisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_NAME,
   "İsim:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_PATH,
   "Yol:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_CORE,
   "Çekirdek:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_DATABASE,
   "Veritabanı:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS,
   "Eklentiler:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS_PLACEHOLDER,
   "(boşlukla ayrılmış; varsayılan olarak tümünü içerir)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_FILTER_INSIDE_ARCHIVES,
   "Arşivlerin içine filtre uygula"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FOR_THUMBNAILS,
   "(küçük resimleri bulmak için kullanılır)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST_ITEM,
   "Öğeyi silmek istiyor musunuz \"%1\"?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CANNOT_ADD_TO_ALL_PLAYLISTS,
   "Lütfen önce tek bir oynatma listesi seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE,
   "Sil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_ENTRY,
   "Girdi Ekle..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FILES,
   "Dosya Ekle..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FOLDER,
   "Klasör Ekle..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_EDIT,
   "Düzenle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FILES,
   "Dosyaları Seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FOLDER,
   "Klasör Seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FIELD_MULTIPLE,
   "<birden fazla>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_UPDATE_PLAYLIST_ENTRY,
   "Oynatma listesi girdisi güncellenirken hata."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLEASE_FILL_OUT_REQUIRED_FIELDS,
   "Lütfen tüm gerekli alanları doldurun."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_NIGHTLY,
   "RetroArch'ı Güncelle (gecelik sürüm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FINISHED,
   "RetroArch başarıyla güncellendi. Değişikliklerin etkili olması için lütfen yeniden başlatın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FAILED,
   "Güncelleme başarısız oldu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT_CONTRIBUTORS,
   "Katkıda bulunanlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CURRENT_SHADER,
   "Mevcut gölgelendirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_DOWN,
   "Aşağı Taşı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_UP,
   "Yukarı Taşı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD,
   "Yükle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SAVE,
   "Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE,
   "Kaldır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE_PASSES,
   "Geçişleri Kaldır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_APPLY,
   "Uygula"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_ADD_PASS,
   "Geçiş Ekle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_CLEAR_ALL_PASSES,
   "Tüm Geçişleri Temizle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_NO_PASSES,
   "Gölgelendirici geçişi yok."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PASS,
   "Geçişi Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL_PASSES,
   "Tüm Geçişleri Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PARAMETER,
   "Parametreleri Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_THUMBNAIL,
   "Küçük resim indir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALREADY_IN_PROGRESS,
   "Bir indirme işlemi zaten devam ediyor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_STARTUP_PLAYLIST,
   "Oynatma listesinde başla:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_TYPE,
   "Küçük resim"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_CACHE_LIMIT,
   "Küçük resim önbellek sınırı:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_DROP_SIZE_LIMIT,
   "Sürükle ve bırak Küçük resim boyutu sınırı:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS,
   "Tüm Küçük Resimleri İndir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_ENTIRE_SYSTEM,
   "Tüm Sistem"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_THIS_PLAYLIST,
   "Bu Oynatma Listesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_PACK_DOWNLOADED_SUCCESSFULLY,
   "Küçük resimler başarıyla indirildi."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_PLAYLIST_THUMBNAIL_PROGRESS,
   "Başarılı: %1 Başarısız: %2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_OPTIONS,
   "Çekirdek Seçenekleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET,
   "Sıfırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL,
   "Tümünü Sıfırla"
   )

/* Unsorted */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SETTINGS,
   "Güncelleyici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_SETTINGS,
   "Cheevos Hesapları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST_END,
   "Hesap Listesi Sonu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_DEADZONE_LIST,
   "Turbo/Ölü Bölge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_COUNTERS,
   "Çekirdek Sayaçları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_DISK,
   "Disk seçilmedi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_COUNTERS,
   "Ön Uç Sayaçları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HORIZONTAL_MENU,
   "Yatay Menü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_HIDE_UNBOUND,
   "Bağlı Olmayan Çekirdek Giriş Tanımlayıcılarını Gizle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_LABEL_SHOW,
   "Giriş Tanımlayıcı Etiketlerini Göster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SETTINGS,
   "Ekran Kaplama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_HISTORY,
   "Son Kullanılanı Yükle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_HISTORY,
   "Geçmiş oynatma listesinden son içeriği seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MULTIMEDIA_SETTINGS,
   "Çoklu Ortam"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_SETTINGS,
   "Alt sistemler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETPLAY_HOSTS_FOUND,
   "Netplay sunucuları yok."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PERFORMANCE_COUNTERS,
   "Performans sayacı yok."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLISTS,
   "Oynatma listesi yok."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE,
   "Çevrimiçi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SETTINGS,
   "Hile Ayarları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_SETTINGS,
   "Hile Aramaya Başla veya Devam Et"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_MUSIC,
   "Çalıştır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SECONDS,
   "saniye"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_CORE,
   "Çekirdeği Başlat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_START_CORE,
   "İçerik olmadan çekirdeği başlat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUPPORTED_CORES,
   "Önerilen çekirdekler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNABLE_TO_READ_COMPRESSED_FILE,
   "Sıkıştırılmış dosya okunamıyor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER,
   "Kullanıcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_IMAGE_VIEWER,
   "Dahili Resim Görüntüleyici Kullan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Azami takas zinciri görüntüsü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Video sürücüsüne açıkça belirtilen arabelleğe alma kipini kullanmasını söyler."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_PARAMETERS,
   "Şu anda menüde kullanılan gölgelendirici hazır ayarının kendisini değiştirir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_TWO,
   "Gölgelendirici Ön Ayarı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL_LIST,
   "URL'ye Gözat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL,
   "URL Yolu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_START,
   "Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME,
   "Kullanıcı Adı: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_FOUND,
   "Uyumlu içerik bulundu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_GONG,
   "Gong'u başlat"
   )

/* Unused (Only Exist in Translation Files) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_AUTO,
   "Otomatik En Boy Oranı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME_LAN,
   "Kullanıcı Adı (yerel): %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATUS,
   "Durum"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_BGM_ENABLE,
   "Sistem BGM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CUSTOM_RATIO,
   "Özel Oran"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_ENABLE,
   "Kayıt Desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_PATH,
   "Çıktı Kaydını Farklı Kaydet..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_USE_OUTPUT_DIRECTORY,
   "Kayıtları Çıktı Dizinine Kaydet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH_IDX,
   "Eşleşmeyi Göster #"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_MATCH_IDX,
   "Görüntülenecek eşleşmeyi seçin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_ASPECT,
   "En boy oranını zorla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FROM_PLAYLIST,
   "Bir oynatma listesinden seç"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME,
   "Devam et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME,
   "Çalışmakta olan içeriği devam ettirin ve Hızlı Menüden çıkın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VIEW_MATCHES,
   "%u Eşleşmelerinin Listesini Görüntüle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CREATE_OPTION,
   "Bu Eşleşmeden Kod Oluştur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_OPTION,
   "Bu Eşleşmeyi Sil"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_FOOTER_OPACITY,
   "Alt Bilgi Şeffaflığı"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_FOOTER_OPACITY,
   "Altbilgi grafiğinin opaklığını değiştirin."
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_HEADER_OPACITY,
   "Başlık Şeffaflığı"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_HEADER_OPACITY,
   "Başlık grafiğinin opaklığını değiştirin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_START_CONTENT,
   "İçeriği Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_PATH,
   "İçerik Geçmişi Yolu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "Çıkış Ekranı Kimliği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "CRT ekranına bağlı çıkış portunu seç."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP,
   "Yardım"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_AUDIO_VIDEO_TROUBLESHOOTING,
   "Ses/Video Sorun Gider"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CHANGE_VIRTUAL_GAMEPAD,
   "Sanal Oyun Kolu Yerleşimini Değiştir"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LOADING_CONTENT,
   "İçerik Yükleniyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SCANNING_CONTENT,
   "İçerik Taranıyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_WHAT_IS_A_CORE,
   "Çekirdek Nedir?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SEND_DEBUG_INFO,
   "Hata Ayıklama Bilgisi Gönder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_SEND_DEBUG_INFO,
   "Analiz için cihazların ve RetroArch yapılandırmasına ilişkin teşhis bilgilerini gönderir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGEMENT,
   "Veritabanı Ayarları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DELAY_FRAMES,
   "Netplay Kare Gecikmeleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LAN_SCAN_SETTINGS,
   "Yerel ağı tara"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_LAN_SCAN_SETTINGS,
   "Yerel ağdaki Netplay ana bilgisayarlarını ara ve bağlan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MODE,
   "Netplay İstemcisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE,
   "Netplay İzleyici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_DESCRIPTION,
   "Açıklama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_ENABLE,
   "Azami Çalışma Hızını Sınırla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_SEARCH,
   "Yeni Hile Kodu Aramaya Başla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_SEARCH,
   "Yeni bir hile aramaya başlayın. Bit sayısı değiştirilebilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CONTINUE_SEARCH,
   "Aramaya Devam Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_CONTINUE_SEARCH,
   "Yeni bir hile için aramaya devam edin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST_HARDCORE,
   "Başarılar (Zorlu)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_DETAILS,
   "Hile Ayrıntıları"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_DETAILS,
   "Hile ayrıntıları ayarlarını yönetir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_SEARCH,
   "Hile Aramaya Başla veya Devam Et"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_SEARCH,
   "Hile kodu aramayı başla veya devam et."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_NUM_PASSES,
   "Hile Geçişleri"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_NUM_PASSES,
   "Hileleri artırın veya azaltın."
   )

/* Unused (Needs Confirmation) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X,
   "Sol Analog X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y,
   "Sol Analog Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X,
   "Sağ Analog X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y,
   "Sağ Analog Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_SETTINGS,
   "Hile Aramaya Başla veya Devam Et"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST,
   "Veritabanı İmleç Listesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DEVELOPER,
   "Veritabanı - Filtre : Geliştirici"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PUBLISHER,
   "Veritabanı - Filtre : Dağıtıcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ORIGIN,
   "Veritabanı - Filtre : Köken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_FRANCHISE,
   "Veritabanı - Filtre : İmtiyaz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ESRB_RATING,
   "Veritabanı - Filtre : ESRB Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ELSPA_RATING,
   "Veritabanı - Filtre : ELSPA Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PEGI_RATING,
   "Veritabanı - Filtre : PEGI Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_CERO_RATING,
   "Veritabanı - Filtre : CERO Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_BBFC_RATING,
   "Veritabanı - Filtre : BBFC Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_MAX_USERS,
   "Veritabanı - Filtre : Azami Kullanıcı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_MONTH,
   "Veritabanı - Filtre : Aylık Yayın Tarihi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_YEAR,
   "Veritabanı - Filtre : Yıllık Yayın Tarihi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Veritabanı - Filtre : Edge Dergisi Sayısı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_EDGE_MAGAZINE_RATING,
   "Veritabanı - Filtre : Edge Dergisi Değerlendirmesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DATABASE_INFO,
   "Veritabanı Bilgisi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG,
   "Yapılandırma"
   )
MSG_HASH( /* FIXME Seems related to MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY, possible duplicate */
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIR,
   "İndirilenler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SETTINGS,
   "Netplay ayarları"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SLANG_SUPPORT,
   "Slang desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FBO_SUPPORT,
   "OpenGL/Direct3D doku oluştur (çoklu geçişli gölgelendirici) desteği"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DIR,
   "İçerik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DIR,
   "Genellikle, libretro/RetroArch uygulamalarını varlıklara işaret etmek üzere bir araya getiren geliştiriciler tarafından ayarlanır."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASK_ARCHIVE,
   "Sor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS,
   "Temel menü kontrolleri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_CONFIRM,
   "Onayla/TAMAM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_INFO,
   "Bilgi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_QUIT,
   "Çıkış"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_SCROLL_UP,
   "Yukarı Kaydır"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_START,
   "Varsayılanlar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_KEYBOARD,
   "Klavye Aç/Kapa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_MENU,
   "Menü Aç/Kapa"
   )

/* Discord Status */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_MENU,
   "Menü-İçinde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME,
   "Oyun-İçinde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME_PAUSED,
   "Oyun-İçinde (Durduruldu)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PLAYING,
   "Oynatılıyor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PAUSED,
   "Durduruldu"
   )

/* Notifications */

MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_WHEN_LOADED,
   "Netplay İçerik yüklendiğinde başlayacaktır."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOAD_CONTENT_MANUALLY,
   "Uygun bir çekirdek veya içerik dosyası bulunamadı, el ile yükleyin."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER_FALLBACK,
   "Grafik sürücünüz RetroArch'taki mevcut video sürücüsü ile uyumlu değil ve %s sürücüsüne geri dönülüyor. Lütfen değişikliklerin geçerli olması için RetroArch'ı yeniden başlatın."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_SUCCESS,
   "Çekirdek kurulumu başarılı"
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_ERROR,
   "Çekirdek kurulumu başarısız"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_INSTRUCTIONS,
   "Tüm hileleri silmek için beş kez sağa basın."
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_DEBUG_INFO,
   "Hata ayıklama bilgisi kaydedilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_DEBUG_INFO,
   "Hata ayıklama bilgisi sunucuya gönderilemedi."
   )
MSG_HASH(
   MSG_SENDING_DEBUG_INFO,
   "Hata ayıklama bilgisi gönderiliyor..."
   )
MSG_HASH(
   MSG_SENT_DEBUG_INFO,
   "Hata ayıklama bilgisi sunucuya başarıyla gönderildi. Kimlik numaranız %u."
   )
MSG_HASH(
   MSG_PRESS_TWO_MORE_TIMES_TO_SEND_DEBUG_INFO,
   "RetroArch ekibine tanılama bilgileri göndermek için iki kez daha basın."
   )
MSG_HASH(
   MSG_PRESS_ONE_MORE_TIME_TO_SEND_DEBUG_INFO,
   "RetroArch ekibine tanılama bilgileri göndermek için bir kez daha basın."
   )
MSG_HASH(
   MSG_AUDIO_MIXER_VOLUME,
   "Global ses karıştırıcı sesi"
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCAN_COMPLETE,
   "Netplay taraması tamamlandı."
   )
MSG_HASH(
   MSG_SORRY_UNIMPLEMENTED_CORES_DONT_DEMAND_CONTENT_NETPLAY,
   "Üzgünüz, uygulanamadı: içerik istemeyen çekirdekler netplay'e katılamaz."
   )
MSG_HASH(
   MSG_NATIVE,
   "Özgün"
   )
MSG_HASH(
   MSG_DEVICE_DISCONNECTED_FROM_PORT,
   "Cihaz bağlantı noktasından çıkarıldı"
   )
MSG_HASH(
   MSG_UNKNOWN_NETPLAY_COMMAND_RECEIVED,
   "Bilinmeyen netplay komutu alındı"
   )
MSG_HASH(
   MSG_FILE_ALREADY_EXISTS_SAVING_TO_BACKUP_BUFFER,
   "Dosya zaten mevcut. Yedek ara belleğe kaydediliyor"
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM,
   "Bağlantı kaynağı: \"%s\""
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM_NAME,
   "Bağlantı kaynağı: \"%s (%s)\""
   )
MSG_HASH(
   MSG_PUBLIC_ADDRESS,
   "Bağlantı Noktası Eşleme Başarılı"
   )
MSG_HASH(
   MSG_UPNP_FAILED,
   "Bağlantı Noktası Eşlemesi Başarısız"
   )
MSG_HASH(
   MSG_NO_ARGUMENTS_SUPPLIED_AND_NO_MENU_BUILTIN,
   "Argüman yok ve menü yerleşik değil, yardım görüntüleniyor..."
   )
MSG_HASH(
   MSG_SETTING_DISK_IN_TRAY,
   "Disk sistem tepsisi ayarı"
   )
MSG_HASH(
   MSG_WAITING_FOR_CLIENT,
   "İstemci bekleniyor..."
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_LEFT_THE_GAME,
   "Oyundan ayrıldın"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_AS_PLAYER_N,
   "%u oyuncu olarak katıldınız"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_WITH_INPUT_DEVICES_S,
   "%.*s Giriş cihazlarıyla katıldınız"
   )
MSG_HASH(
   MSG_NETPLAY_PLAYER_S_LEFT,
   "Oyuncu %.*s oyunu terk etti"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_AS_PLAYER_N,
   "%.*s oyuncu olarak katıldı %u"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_WITH_INPUT_DEVICES_S,
   "%.*s giriş cihazlarıyla birlikte katıldı %.*s"
   )
MSG_HASH(
   MSG_NETPLAY_NOT_RETROARCH,
   "Diğer eş RetroArch çalıştırmadığı veya RetroArch'ın eski bir sürümünü çalıştırdığı için bir netplay bağlantı girişimi başarısız oldu."
   )
MSG_HASH(
   MSG_NETPLAY_OUT_OF_DATE,
   "Netplay eşiniz RetroArch'ın eski bir sürümünü kullanıyor. Bağlantı gerçekleştiremez."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_VERSIONS,
   "UYARI: Netplay eşi farklı bir RetroArch sürümünü çalıştırıyor. Sorun oluşursa, aynı sürümü kullanın."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORES,
   "Netplay eşi farklı bir çekirdek kullanıyor. Bağlantı gerçekleştiremez."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORE_VERSIONS,
   "UYARI: Netplay eşi, çekirdeğin farklı bir sürümünü çalıştırıyor. Sorun oluşursa, aynı sürümü kullanın."
   )
MSG_HASH(
   MSG_NETPLAY_ENDIAN_DEPENDENT,
   "Bu çekirdek, sistemler arasında mimari farkı nedeniyle netplay desteklemiyor"
   )
MSG_HASH(
   MSG_NETPLAY_PLATFORM_DEPENDENT,
   "Bu çekirdek, mimari farkı nedeniyle netplay desteklemiyor"
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_PASSWORD,
   "Netplay sunucu parolasını gir:"
   )
MSG_HASH(
   MSG_DISCORD_CONNECTION_REQUEST,
   "Bu kullanıcıdan bağlantıya izin vermek istiyor musunuz:"
   )
MSG_HASH(
   MSG_NETPLAY_INCORRECT_PASSWORD,
   "Yanlış parola"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_NAMED_HANGUP,
   "\"%s\" bağlantısı kesildi"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_HANGUP,
   "NetPlay istemci bağlantısı kesildi"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_HANGUP,
   "Netplay bağlantısı kesildi"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_UNPRIVILEGED,
   "Oynama izniniz yok"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NO_SLOTS,
   "Boş oyuncu yuvası yok"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NOT_AVAILABLE,
   "İstenen giriş cihazları mevcut değil"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY,
   "Oynatma kipine geçilemiyor"
   )
MSG_HASH(
   MSG_NETPLAY_PEER_PAUSED,
   "Netplay eşi \"%s\" duraklatıldı"
   )
MSG_HASH(
   MSG_NETPLAY_CHANGED_NICK,
   "Takma adınız \"%s\" olarak değiştirildi"
   )
MSG_HASH(
   MSG_AUDIO_VOLUME,
   "Ses seviyesi"
   )
MSG_HASH(
   MSG_AUTODETECT,
   "Otomatik algıla"
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FROM,
   "Durum kaydından otomatik yükle"
   )
MSG_HASH(
   MSG_CAPABILITIES,
   "Yetenekler"
   )
MSG_HASH(
   MSG_CONNECTING_TO_NETPLAY_HOST,
   "Netplay sunucusuna bağlanılıyor"
   )
MSG_HASH(
   MSG_CONNECTING_TO_PORT,
   "Port'a bağlanılıyor"
   )
MSG_HASH(
   MSG_CONNECTION_SLOT,
   "Yuvaya bağlanılıyor"
   )
MSG_HASH(
   MSG_FETCHING_CORE_LIST,
   "Çekirdek listesi getiriliyor..."
   )
MSG_HASH(
   MSG_CORE_LIST_FAILED,
   "Çekirdek listesi alınamadı!"
   )
MSG_HASH(
   MSG_LATEST_CORE_INSTALLED,
   "En son sürüm zaten kurulu: "
   )
MSG_HASH(
   MSG_UPDATING_CORE,
   "Çekirdek güncelleniyor: "
   )
MSG_HASH(
   MSG_DOWNLOADING_CORE,
   "Çekirdek indiriliyor: "
   )
MSG_HASH(
   MSG_EXTRACTING_CORE,
   "Çekirdek çıkarılıyor: "
   )
MSG_HASH(
   MSG_CORE_INSTALLED,
   "Çekirdek kuruldu: "
   )
MSG_HASH(
   MSG_SCANNING_CORES,
   "Çekirdekler taranıyor..."
   )
MSG_HASH(
   MSG_CHECKING_CORE,
   "Çekirdek kontrol ediliyor: "
   )
MSG_HASH(
   MSG_ALL_CORES_UPDATED,
   "Tüm kurulu çekirdekler en son sürümde"
   )
MSG_HASH(
   MSG_NUM_CORES_UPDATED,
   "çekirdekler güncellendi: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_RESETTING_CORES,
   "Çekirdekler sıfırlanıyor: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CORES_RESET,
   "Çekirdekleri sıfırla: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CLEANING_PLAYLIST,
   "Oynatma listesi temizleniyor: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_PLAYLIST_CLEANED,
   "Oynatma listesi temizlendi: "
   )
MSG_HASH(
   MSG_ADDED_TO_FAVORITES,
   "Sık kullanılanlara eklendi"
   )
MSG_HASH(
   MSG_ADD_TO_FAVORITES_FAILED,
   "Sık kullanılan eklenemedi: oynatma listesi dolu"
   )
MSG_HASH(
   MSG_SET_CORE_ASSOCIATION,
   "Çekirdek ayarla: "
   )
MSG_HASH(
   MSG_RESET_CORE_ASSOCIATION,
   "Oynatma listesi girişi çekirdek ilişkilendirmesi sıfırlandı."
   )
MSG_HASH(
   MSG_APPENDED_DISK,
   "Eklenen disk"
   )
MSG_HASH(
   MSG_FAILED_TO_APPEND_DISK,
   "Disk eklenemedi"
   )
MSG_HASH(
   MSG_APPLICATION_DIR,
   "Uygulama Dizini"
   )
MSG_HASH(
   MSG_APPLYING_CHEAT,
   "Hile değişikliklerini uygulanıyor."
   )
MSG_HASH(
   MSG_APPLYING_SHADER,
   "Gölgelendirici uygulanıyor"
   )
MSG_HASH(
   MSG_AUDIO_MUTED,
   "Ses kapatıldı."
   )
MSG_HASH(
   MSG_AUDIO_UNMUTED,
   "Ses açıldı."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_ERROR_SAVING,
   "Otomatik yapılandırma dosyası kayıt hatası."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_SAVED_SUCCESSFULLY,
   "Otomatik yapılandırma dosyası başarıyla kaydedildi."
   )
MSG_HASH(
   MSG_AUTOSAVE_FAILED,
   "Otomatik kaydetme başlatılamadı."
   )
MSG_HASH(
   MSG_AUTO_SAVE_STATE_TO,
   "Durumu otomatik kaydet"
   )
MSG_HASH(
   MSG_BLOCKING_SRAM_OVERWRITE,
   "SRAM Üzerine Yazmayı Engelleniyor"
   )
MSG_HASH(
   MSG_BRINGING_UP_COMMAND_INTERFACE_ON_PORT,
   "Komut arabirimini bağlantı noktasına getir"
   )
MSG_HASH(
   MSG_BYTES,
   "bayt"
   )
MSG_HASH(
   MSG_CANNOT_INFER_NEW_CONFIG_PATH,
   "Yeni yapılandırma yolu çıkarılamıyor. Mevcut saati kullanın."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Başarımlar için Zorlu Kip Etkin, konum kaydedici ve geri sarma devre dışı bırakıldı."
   )
MSG_HASH(
   MSG_COMPARING_WITH_KNOWN_MAGIC_NUMBERS,
   "Bilinen sihirli sayılarla karşılaştırılıyor..."
   )
MSG_HASH(
   MSG_COMPILED_AGAINST_API,
   "API'ye karşı derlendi"
   )
MSG_HASH(
   MSG_CONFIG_DIRECTORY_NOT_SET,
   "Yapılndırma dizini ayarlanmadı. Yeni yapılandırma kaydedilemiyor."
   )
MSG_HASH(
   MSG_CONNECTED_TO,
   "Bağlı"
   )
MSG_HASH(
   MSG_CONTENT_CRC32S_DIFFER,
   "İçerik CRC32'leri farklıdır. Farklı oyunlar kullanılamaz."
   )
MSG_HASH(
   MSG_CONTENT_LOADING_SKIPPED_IMPLEMENTATION_WILL_DO_IT,
   "İçerik yüklemesi atlandı. Uygulama tek başına yükleyecektir."
   )
MSG_HASH(
   MSG_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Çekirdek durum kayıtlarını desteklemiyor."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_CREATED_SUCCESSFULLY,
   "Çekirdek seçenekleri dosyası başarıyla oluşturuldu."
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_ANY_NEXT_DRIVER,
   "Bir sonraki sürücü bulunamadı"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_COMPATIBLE_SYSTEM,
   "Uyumlu sistem bulunamadı."
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_VALID_DATA_TRACK,
   "Geçerli veri yolu bulunamadı"
   )
MSG_HASH(
   MSG_COULD_NOT_OPEN_DATA_TRACK,
   "veri izi açılamadı"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_CONTENT_FILE,
   "İçerik dosyası okunamadı"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_MOVIE_HEADER,
   "Film başlığı okunamadı."
   )
MSG_HASH(
   MSG_COULD_NOT_READ_STATE_FROM_MOVIE,
   "Film durumu okunamadı."
   )
MSG_HASH(
   MSG_CRC32_CHECKSUM_MISMATCH,
   "CRC32 sağlama toplamı içerik dosyası ile kayıt dosyası başlığında kaydedilen içerik sağlama toplamı arasındaki uyumsuzluk var, yeniden oynatma sırasında çözülme olasılığı yüksek."
   )
MSG_HASH(
   MSG_CUSTOM_TIMING_GIVEN,
   "Özel zamanlama verildi"
   )
MSG_HASH(
   MSG_DECOMPRESSION_ALREADY_IN_PROGRESS,
   "Dekompresyon zaten devam ediyor."
   )
MSG_HASH(
   MSG_DECOMPRESSION_FAILED,
   "Dekompresyon başarısız oldu."
   )
MSG_HASH(
   MSG_DETECTED_VIEWPORT_OF,
   "Tespit edilen görünüm alanı"
   )
MSG_HASH(
   MSG_DID_NOT_FIND_A_VALID_CONTENT_PATCH,
   "Geçerli bir içerik düzeltme eki bulamadınız."
   )
MSG_HASH(
   MSG_DISCONNECT_DEVICE_FROM_A_VALID_PORT,
   "Aygıtı geçerli bir bağlantı noktasından çıkarın."
   )
MSG_HASH(
   MSG_DISK_CLOSED,
   "Kapatıldı"
   )
MSG_HASH(
   MSG_DISK_EJECTED,
   "Çıkartıldı"
   )
MSG_HASH(
   MSG_DOWNLOADING,
   "İndiriliyor"
   )
MSG_HASH(
   MSG_INDEX_FILE,
   "indeks"
   )
MSG_HASH(
   MSG_DOWNLOAD_FAILED,
   "İndirme başarısız"
   )
MSG_HASH(
   MSG_ERROR,
   "Hata"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_CONTENT,
   "Libretro Çekirdeği içerik gerektirir, ancak hiçbir şey sağlanmadı."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_SPECIAL_CONTENT,
   "Libretro Çekirdeği özel içerik gerektirir, ancak hiçbir şey sağlanmadı"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_VFS,
   "Çekirdek VFS'yi desteklemiyor ve yerel bir kopyadan yükleme başarısız oldu"
   )
MSG_HASH(
   MSG_ERROR_PARSING_ARGUMENTS,
   "Argümanlar ayrıştırılırken hata oluştu."
   )
MSG_HASH(
   MSG_ERROR_SAVING_CORE_OPTIONS_FILE,
   "Çekirdek seçenek dosyası kaydedilirken hata oluştu."
   )
MSG_HASH(
   MSG_ERROR_SAVING_REMAP_FILE,
   "Yeniden yapılandırma dosyası kaydedilirken hata oluştu."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_REMAP_FILE,
   "Yeniden yapılandırma dosyası kaldırılırken hata oluştu."
   )
MSG_HASH(
   MSG_ERROR_SAVING_SHADER_PRESET,
   "Gölgelendirici hazır ayarı kaydedilirken hata oluştu."
   )
MSG_HASH(
   MSG_EXTERNAL_APPLICATION_DIR,
   "Harici Uygulama Dizini"
   )
MSG_HASH(
   MSG_EXTRACTING,
   "Ayıklanıyor"
   )
MSG_HASH(
   MSG_EXTRACTING_FILE,
   "Dosya ayıklanıyor"
   )
MSG_HASH(
   MSG_FAILED_SAVING_CONFIG_TO,
   "Yapılandırma işlemi kaydedilemedi"
   )
MSG_HASH(
   MSG_FAILED_TO,
   "Başaramadı"
   )
MSG_HASH(
   MSG_FAILED_TO_ACCEPT_INCOMING_SPECTATOR,
   "Gelen seyirci kabul edilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_ALLOCATE_MEMORY_FOR_PATCHED_CONTENT,
   "Yamalı içerik için bellek ayrılamadı..."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER,
   "Gölgelendirici uygulanamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER_PRESET,
   "Gölgelendirici ön ayarı uygulanamadı:"
   )
MSG_HASH(
   MSG_FAILED_TO_BIND_SOCKET,
   "Soket bağlanamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_CREATE_THE_DIRECTORY,
   "Dizin oluşturulamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_EXTRACT_CONTENT_FROM_COMPRESSED_FILE,
   "Sıkıştırılmış dosyadan içerik alınamadı"
   )
MSG_HASH(
   MSG_FAILED_TO_GET_NICKNAME_FROM_CLIENT,
   "İstemciden takma ad alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD,
   "Yükleme başarısız"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_CONTENT,
   "İçerik yüklenemedi"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_MOVIE_FILE,
   "Film dosyası yüklenemedi"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_OVERLAY,
   "Kaplama yüklenemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_STATE,
   "Kayıtlı durum yüklenemedi"
   )
MSG_HASH(
   MSG_FAILED_TO_OPEN_LIBRETRO_CORE,
   "Libretro çekirdeği açılamadı"
   )
MSG_HASH(
   MSG_FAILED_TO_PATCH,
   "Yama yapılamadı"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_CLIENT,
   "İstemciden başlık alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME,
   "Takma ad alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_FROM_HOST,
   "Ana bilgisayardan takma ad alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_SIZE_FROM_HOST,
   "Ana bilgisayardan takma ad boyutu alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_SRAM_DATA_FROM_HOST,
   "Ana bilgisayardan SRAM verileri alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_DISK_FROM_TRAY,
   "Disk tepsiden çıkartılamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_TEMPORARY_FILE,
   "Geçici dosya kaldırılamadı"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_SRAM,
   "SRAM kaydedilemedi"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_STATE_TO,
   "Durum kaydı kaydedilemedi"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME,
   "Takma ad gönderilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_SIZE,
   "Takma ad boyutu gönderilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_CLIENT,
   "Takma ad diğer cihaza gönderilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_HOST,
   "Sunucuya takma ad gönderilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_SRAM_DATA_TO_CLIENT,
   "SRAM verileri istemciye gönderilemedi."
   )
MSG_HASH(
   MSG_FAILED_TO_START_AUDIO_DRIVER,
   "Ses sürücüsü başlatılamadı. Ses olmadan devam edilecek."
   )
MSG_HASH(
   MSG_FAILED_TO_START_MOVIE_RECORD,
   "Film kaydı başlatılamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_START_RECORDING,
   "Kayıt başlatılamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_TAKE_SCREENSHOT,
   "Ekran görüntüsü alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_LOAD_STATE,
   "Durum yüklemesi geri alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_SAVE_STATE,
   "Durum kaydetme geri alınamadı."
   )
MSG_HASH(
   MSG_FAILED_TO_UNMUTE_AUDIO,
   "Ses açılamadı."
   )
MSG_HASH(
   MSG_FATAL_ERROR_RECEIVED_IN,
   "Kritik hata alındı"
   )
MSG_HASH(
   MSG_FILE_NOT_FOUND,
   "Dosya bulunamadı"
   )
MSG_HASH(
   MSG_FOUND_AUTO_SAVESTATE_IN,
   "Otomatik durum kaydı bulundu"
   )
MSG_HASH(
   MSG_FOUND_DISK_LABEL,
   "Disk etiketi bulundu"
   )
MSG_HASH(
   MSG_FOUND_FIRST_DATA_TRACK_ON_FILE,
   "Dosyada ilk veri parçasını bulundu"
   )
MSG_HASH(
   MSG_FOUND_LAST_STATE_SLOT,
   "Son durum yuvası bulundu"
   )
MSG_HASH(
   MSG_FOUND_SHADER,
   "Gölgelendirici bulundu"
   )
MSG_HASH(
   MSG_FRAMES,
   "Kareler"
   )
MSG_HASH(
   MSG_GAME_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "Oyun Başına Seçenekler: oyunda bulunan oyuna özgü temel seçenekler"
   )
MSG_HASH(
   MSG_GOT_INVALID_DISK_INDEX,
   "Geçersiz disk indeksi var."
   )
MSG_HASH(
   MSG_GRAB_MOUSE_STATE,
   "Fare durumunu yakala"
   )
MSG_HASH(
   MSG_GAME_FOCUS_ON,
   "Oyun odaklanması açık"
   )
MSG_HASH(
   MSG_GAME_FOCUS_OFF,
   "Oyun odaklanması kapalı"
   )
MSG_HASH(
   MSG_HW_RENDERED_MUST_USE_POSTSHADED_RECORDING,
   "Libretro çekirdek donanımdır. Sonrası gölgeli kayıt kullanmanız gerekir."
   )
MSG_HASH(
   MSG_INFLATED_CHECKSUM_DID_NOT_MATCH_CRC32,
   "Sağlama toplamı CRC32 ile eşleşmedi."
   )
MSG_HASH(
   MSG_INPUT_CHEAT,
   "Hile Girişi"
   )
MSG_HASH(
   MSG_INPUT_CHEAT_FILENAME,
   "Hile Dosya İsmi Girişi"
   )
MSG_HASH(
   MSG_INPUT_PRESET_FILENAME,
   "Önceden Ayarlanmış Dosya Adı Gir"
   )
MSG_HASH(
   MSG_INPUT_RENAME_ENTRY,
   "Başlığı Yeniden Adlandır"
   )
MSG_HASH(
   MSG_INTERFACE,
   "Arayüz"
   )
MSG_HASH(
   MSG_INTERNAL_STORAGE,
   "Dahili Depolama"
   )
MSG_HASH(
   MSG_REMOVABLE_STORAGE,
   "Çıkartılabilir Depolama"
   )
MSG_HASH(
   MSG_INVALID_NICKNAME_SIZE,
   "Geçersiz kullanıcı adı boyutu."
   )
MSG_HASH(
   MSG_IN_BYTES,
   "bayt cinsinden"
   )
MSG_HASH(
   MSG_IN_MEGABYTES,
   "megabayt cinsinden"
   )
MSG_HASH(
   MSG_IN_GIGABYTES,
   "gigabayt cinsinden"
   )
MSG_HASH(
   MSG_LIBRETRO_ABI_BREAK,
   "bu libretro uygulamasından farklı bir libretro sürümüne karşı derlenmiştir."
   )
MSG_HASH(
   MSG_LIBRETRO_FRONTEND,
   "Libretro için ön uç"
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT,
   "#%d yuvasından durum yüklendi."
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT_AUTO,
   "#-1 yuvasından durum yüklendi (otomatik)."
   )
MSG_HASH(
   MSG_LOADING,
   "Yükleniyor"
   )
MSG_HASH(
   MSG_FIRMWARE,
   "Bir veya daha fazla ürün yazılımı dosyası eksik"
   )
MSG_HASH(
   MSG_LOADING_CONTENT_FILE,
   "İçerik dosyası yükleniyor"
   )
MSG_HASH(
   MSG_LOADING_HISTORY_FILE,
   "Geçmiş dosyası yükleniyor"
   )
MSG_HASH(
   MSG_LOADING_FAVORITES_FILE,
   "Sık kullanılanlar dosyası yükleniyor"
   )
MSG_HASH(
   MSG_LOADING_STATE,
   "Durum yükleniyor"
   )
MSG_HASH(
   MSG_MEMORY,
   "Bellek"
   )
MSG_HASH(
   MSG_MOVIE_FILE_IS_NOT_A_VALID_BSV1_FILE,
   "Giriş tekrar film dosyası geçerli bir BSV1 dosyası değil."
   )
MSG_HASH(
   MSG_MOVIE_FORMAT_DIFFERENT_SERIALIZER_VERSION,
   "Giriş tekrar film formatı farklı bir seri hale getirici sürümüne sahip görünüyor. Büyük olasılıkla başarısız olacak."
   )
MSG_HASH(
   MSG_MOVIE_PLAYBACK_ENDED,
   "Giriş tekrar filmi oynatımı sona erdi."
   )
MSG_HASH(
   MSG_MOVIE_RECORD_STOPPED,
   "Video kaydı durduruluyor."
   )
MSG_HASH(
   MSG_NETPLAY_FAILED,
   "Netplay başlatılamadı."
   )
MSG_HASH(
   MSG_NO_CONTENT_STARTING_DUMMY_CORE,
   "İçerik yok, Kukla Çekirdek başlatıyor."
   )
MSG_HASH(
   MSG_NO_SAVE_STATE_HAS_BEEN_OVERWRITTEN_YET,
   "Henüz konum kaydetmenin üzerine yazılmadı."
   )
MSG_HASH(
   MSG_NO_STATE_HAS_BEEN_LOADED_YET,
   "Henüz bir konum yüklenmedi."
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_SAVING,
   "Üzerine yazmalar kaydedilemedi."
   )
MSG_HASH(
   MSG_OVERRIDES_SAVED_SUCCESSFULLY,
   "Üzerine yazmalar başarıyla kaydedildi."
   )
MSG_HASH(
   MSG_PAUSED,
   "Durduruldu."
   )
MSG_HASH(
   MSG_READING_FIRST_DATA_TRACK,
   "İlk veri parçasını okunuyor..."
   )
MSG_HASH(
   MSG_RECEIVED,
   "alındı"
   )
MSG_HASH(
   MSG_RECORDING_TERMINATED_DUE_TO_RESIZE,
   "Kayıt yeniden boyutlandırma nedeniyle sonlandırıldı."
   )
MSG_HASH(
   MSG_RECORDING_TO,
   "Kayıt ediliyor"
   )
MSG_HASH(
   MSG_REDIRECTING_CHEATFILE_TO,
   "Hile dosyası yeniden yönlendiriliyor"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVEFILE_TO,
   "Kayıt dosyası yeniden yönlendiriliyor"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVESTATE_TO,
   "Durum kaydı yeniden yönlendiriliyor"
   )
MSG_HASH(
   MSG_REMAP_FILE_SAVED_SUCCESSFULLY,
   "Yeniden yapılandırma dosyası başarıyla kaydedildi."
   )
MSG_HASH(
   MSG_REMAP_FILE_REMOVED_SUCCESSFULLY,
   "Yeniden yapılandırma dosyası başarıyla kaldırıldı."
   )
MSG_HASH(
   MSG_REMOVED_DISK_FROM_TRAY,
   "Tepsiden çıkarılmış disk."
   )
MSG_HASH(
   MSG_REMOVING_TEMPORARY_CONTENT_FILE,
   "Geçici içerik dosyasını kaldır"
   )
MSG_HASH(
   MSG_RESET,
   "Sıfırla"
   )
MSG_HASH(
   MSG_RESTARTING_RECORDING_DUE_TO_DRIVER_REINIT,
   "Sürücü yeniden başlatması nedeniyle kayıt yeniden başlatılıyor."
   )
MSG_HASH(
   MSG_RESTORED_OLD_SAVE_STATE,
   "Eski durum kaydı geri yüklendi."
   )
MSG_HASH(
   MSG_RESTORING_DEFAULT_SHADER_PRESET_TO,
   "Gölgelendirici: varsayılan gölgelendirici ön ayarı geri yükleniyor"
   )
MSG_HASH(
   MSG_REVERTING_SAVEFILE_DIRECTORY_TO,
   "Kayıt dosyası dizinini geri alınıyor"
   )
MSG_HASH(
   MSG_REVERTING_SAVESTATE_DIRECTORY_TO,
   "Durum kaydı dizinini geri alınıyor"
   )
MSG_HASH(
   MSG_REWINDING,
   "Geri sarılıyor."
   )
MSG_HASH(
   MSG_REWIND_INIT,
   "Geri sarma arabellek boyutuyla başlatılıyor"
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED,
   "Geri alma başlatılamadı. Geri sarma devre dışı bırakılacak."
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED_THREADED_AUDIO,
   "Uygulamada threaded ses kullanıyor. Geri sarma kullanılamaz."
   )
MSG_HASH(
   MSG_REWIND_REACHED_END,
   "Geri sarma ara belleğinin sonuna erişildi."
   )
MSG_HASH(
   MSG_SAVED_NEW_CONFIG_TO,
   "Yeni yapılandırma kaydedildi"
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT,
   "Yuvaya kaydedilmiş durum #%d."
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT_AUTO,
   "Yuvaya kaydedilmiş durum #-1 (ses)."
   )
MSG_HASH(
   MSG_SAVED_SUCCESSFULLY_TO,
   "Başarıyla kaydedildi"
   )
MSG_HASH(
   MSG_SAVING_RAM_TYPE,
   "RAM türü kaydediliyor"
   )
MSG_HASH(
   MSG_SAVING_STATE,
   "Durum kaydediliyor"
   )
MSG_HASH(
   MSG_SCANNING,
   "Taranıyor"
   )
MSG_HASH(
   MSG_SCANNING_OF_DIRECTORY_FINISHED,
   "Dizin taraması tamamlandı"
   )
MSG_HASH(
   MSG_SENDING_COMMAND,
   "Komutlar gönderiliyor"
   )
MSG_HASH(
   MSG_SEVERAL_PATCHES_ARE_EXPLICITLY_DEFINED,
   "Tüm yamaları görmezden gelerek birkaç yama açıkça tanımlanmıştır..."
   )
MSG_HASH(
   MSG_SHADER,
   "Gölgelendirici"
   )
MSG_HASH(
   MSG_SHADER_PRESET_SAVED_SUCCESSFULLY,
   "Gölgelendirici hazır ayarı başarıyla kaydedildi."
   )
MSG_HASH(
   MSG_SKIPPING_SRAM_LOAD,
   "SRAM yüklemesi atlanıyor."
   )
MSG_HASH(
   MSG_SLOW_MOTION,
   "Ağır Çekim."
   )
MSG_HASH(
   MSG_FAST_FORWARD,
   "Hızlı İleri Sar."
   )
MSG_HASH(
   MSG_SLOW_MOTION_REWIND,
   "Ağır çekim geri sar."
   )
MSG_HASH(
   MSG_SRAM_WILL_NOT_BE_SAVED,
   "SRAM kaydedilmeyecek."
   )
MSG_HASH(
   MSG_STARTING_MOVIE_PLAYBACK,
   "Film oynatılmaya başlanıyor."
   )
MSG_HASH(
   MSG_STARTING_MOVIE_RECORD_TO,
   "Video kaydının başlangıcı"
   )
MSG_HASH(
   MSG_STATE_SIZE,
   "Durum boyutu"
   )
MSG_HASH(
   MSG_STATE_SLOT,
   "Durum yuvası"
   )
MSG_HASH(
   MSG_TAKING_SCREENSHOT,
   "Ekran görüntüsü alınıyor."
   )
MSG_HASH(
   MSG_SCREENSHOT_SAVED,
   "Ekran görüntüsü kaydedildi"
   )
MSG_HASH(
   MSG_ACHIEVEMENT_UNLOCKED,
   "Başarım Kilidi Açıldı"
   )
MSG_HASH(
   MSG_CHANGE_THUMBNAIL_TYPE,
   "Küçük resim türünü değiştir"
   )
MSG_HASH(
   MSG_TOGGLE_FULLSCREEN_THUMBNAILS,
   "Tam ekran küçük resimler"
   )
MSG_HASH(
   MSG_TOGGLE_CONTENT_METADATA,
   "Üst verileri aç/kapat"
   )
MSG_HASH(
   MSG_NO_THUMBNAIL_AVAILABLE,
   "Küçük resim yok"
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_QUIT,
   "Çıkmak için tekrar bas..."
   )
MSG_HASH(
   MSG_TO,
   "için"
   )
MSG_HASH(
   MSG_UNDID_LOAD_STATE,
   "Durum yükleme geri alındı."
   )
MSG_HASH(
   MSG_UNDOING_SAVE_STATE,
   "Durum kaydı geri alınıyor."
   )
MSG_HASH(
   MSG_UNKNOWN,
   "Bilinmiyor"
   )
MSG_HASH(
   MSG_UNPAUSED,
   "Devam ediyor."
   )
MSG_HASH(
   MSG_UNRECOGNIZED_COMMAND,
   "Tanınmayan komut"
   )
MSG_HASH(
   MSG_USING_CORE_NAME_FOR_NEW_CONFIG,
   "Yeni yapılandırma için çekirdek ismi kullanılıyor."
   )
MSG_HASH(
   MSG_USING_LIBRETRO_DUMMY_CORE_RECORDING_SKIPPED,
   "Libretro kukla Çekirdeği kullanılıyor. Kayıt atlanıyor."
   )
MSG_HASH(
   MSG_VALUE_CONNECT_DEVICE_FROM_A_VALID_PORT,
   "Cihazı geçerli bir porttan bağlayın."
   )
MSG_HASH(
   MSG_VALUE_DISCONNECTING_DEVICE_FROM_PORT,
   "Aygıtın bağlantı noktasından çıkarılması"
   )
MSG_HASH(
   MSG_VALUE_REBOOTING,
   "Yeniden başlatılıyor..."
   )
MSG_HASH(
   MSG_VALUE_SHUTTING_DOWN,
   "Kapatılıyor..."
   )
MSG_HASH(
   MSG_VERSION_OF_LIBRETRO_API,
   "Libretro API sürümü"
   )
MSG_HASH(
   MSG_VIEWPORT_SIZE_CALCULATION_FAILED,
   "Görüş alanı boyut hesaplaması başarısız oldu! Ham veriler kullanılmaya devam edilecek. Muhtemelen düzgün çalışmayacak..."
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY,
   "sanal disk tepsisi."
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_EJECT,
   "çıkar"
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_CLOSE,
   "kapat"
   )
MSG_HASH(
   MSG_FAILED,
   "başarısız"
   )
MSG_HASH(
   MSG_SUCCEEDED,
   "başarılı"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED,
   "yapılandırılmamış"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK,
   "yapılandırılmamış, geri dönülüyor"
   )
MSG_HASH(
   MSG_WIFI_SCAN_COMPLETE,
   "Wi-Fi taraması tamamlandı."
   )
MSG_HASH(
   MSG_SCANNING_WIRELESS_NETWORKS,
   "Kablosuz ağlar taranıyor..."
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCANNING,
   "Netplay sunucuları taranıyor..."
   )
MSG_HASH(
   MSG_PREPARING_FOR_CONTENT_SCAN,
   "İçerik taraması için hazırlanıyor..."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD,
   "Parola Gir"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_OK,
   "Parola geçerli."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_NOK,
   "Parola geçersiz."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD,
   "Parola Gir"
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_OK,
   "Parola doğru."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_NOK,
   "Parola yanlış."
   )
MSG_HASH(
   MSG_CONFIG_OVERRIDE_LOADED,
   "Yapılandırmanın üzerine yazmaları yüklendi."
   )
MSG_HASH(
   MSG_GAME_REMAP_FILE_LOADED,
   "Oyun yeniden konumlandırma dosyası yüklendi."
   )
MSG_HASH(
   MSG_DIRECTORY_REMAP_FILE_LOADED,
   "İçerik dizini yeniden eşleme dosyası yüklendi."
   )
MSG_HASH(
   MSG_CORE_REMAP_FILE_LOADED,
   "Çekirdek yeniden konumlandırma dosyası yüklendi."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Ön-Koşucu devre dışı bırakıldı, bu çekirdek durum kayıtlarını desteklemiyor."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_SAVE_STATE,
   "Durum kaydedilemedi. Ön-Koşucu devre dışı bırakıldı."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_LOAD_STATE,
   "Durum yüklenemedi. Ön-Koşucu devre dışı bırakıldı."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_CREATE_SECONDARY_INSTANCE,
   "İkinci örnek oluşturulamadı. Ön-Koşucu artık yalnızca bir örnek kullanacak."
   )
MSG_HASH(
   MSG_SCANNING_OF_FILE_FINISHED,
   "Dosyanın taranması tamamlandı"
   )
MSG_HASH(
   MSG_CHEAT_INIT_SUCCESS,
   "Hile arama başarıyla başlatıldı"
   )
MSG_HASH(
   MSG_CHEAT_INIT_FAIL,
   "Hile araması başlatılamadı"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_NOT_INITIALIZED,
   "Arama başlatılmadı/başlatılamadı"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_FOUND_MATCHES,
   "Yeni eşleşme sayısı = %u"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_SUCCESS,
   "%u eşleşmeleri eklendi"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_FAIL,
   "Eşleşme eklenemedi"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_SUCCESS,
   "Eşleştirmeden oluşturulan kod"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_FAIL,
   "Kod oluşturulamadı"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_DELETE_MATCH_SUCCESS,
   "Silinmiş eşleşme"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_TOO_MANY,
   "Yetersiz yer. Sahip olabileceğiniz toplam hilelerin sayısı 100'dür."
   )
MSG_HASH(
   MSG_CHEAT_ADD_TOP_SUCCESS,
   "Listenin başına yeni hile eklendi."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BOTTOM_SUCCESS,
   "Listenin altına yeni hile eklendi."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_SUCCESS,
   "Tüm hileler silindi."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BEFORE_SUCCESS,
   "Bundan önce yeni hile eklendi."
   )
MSG_HASH(
   MSG_CHEAT_ADD_AFTER_SUCCESS,
   "Bundan sonra yeni hile eklendi."
   )
MSG_HASH(
   MSG_CHEAT_COPY_BEFORE_SUCCESS,
   "Hile bundan önceye kopyalandı."
   )
MSG_HASH(
   MSG_CHEAT_COPY_AFTER_SUCCESS,
   "Hile bundan sonraya kopyalandı."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_SUCCESS,
   "Hile silindi."
   )
MSG_HASH(
   MSG_DEVICE_CONFIGURED_IN_PORT,
   "Yapılandırılan port:"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_DISK,
   "Disk ayarlanamadı"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_INITIAL_DISK,
   "Son kullanılan disk ayarlanamadı..."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED,
   "Bir durum kaydı yüklendi. Başarılar mevcut oturum için Zorlu Kip devre dışı bırakıldı."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED_CHEAT,
   "Bir hile etkinleştirildi. Başarılar mevcut oturum için Zorlu Kip devre dışı bırakıldı."
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWEST,
   "En düşük"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWER,
   "Düşük"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHER,
   "Yüksek"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHEST,
   "En yüksek"
   )
MSG_HASH(
   MSG_MISSING_ASSETS,
   "Uyarı: Eksik içerikler varsa Çevrimiçi Güncelleyiciyi kullanın"
   )
MSG_HASH(
   MSG_DUMPING_DISC,
   "Diskten aktarılıyor..."
   )
MSG_HASH(
   MSG_DRIVE_NUMBER,
   "Sürücü %d"
   )
MSG_HASH(
   MSG_LOAD_CORE_FIRST,
   "Lütfen önce bir çekirdek yükle."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_READ_FROM_DRIVE,
   "Sürücüden okunamadı, Aktarım iptal edildi."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_WRITE_TO_DISK,
   "Sürücüye yazılamadı. Aktarım iptal edildi."
   )
MSG_HASH(
   MSG_NO_DISC_INSERTED,
   "Sürücüde takılı disk yok."
   )
MSG_HASH(
   MSG_SHADER_PRESET_REMOVED_SUCCESSFULLY,
   "Gölgelendirici ön ayarı başarıyla kaldırıldı."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_SHADER_PRESET,
   "Gölgelendirici hazır ayarını kaldırma hatası."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_INVALID,
   "Geçersiz oyun makinesi DAT dosyası seçildi"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_TOO_LARGE,
   "Seçilen oyun makinesi DAT dosyası çok büyük (yetersiz boş bellek)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_LOAD_ERROR,
   "Oyun makinesi DAT dosyası yüklenemedi (geçersiz biçim?)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONFIG,
   "Geçersiz el ile tarama yapılandırması"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONTENT,
   "Doğrulanmış içerik algılanmadı"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_START,
   "Taranan içerik: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_IN_PROGRESS,
   "Taranıyor: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_M3U_CLEANUP,
   "M3U girişlerini temizle: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_END,
   "Tarama tamamladı: "
   )

/* Lakka */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_LAKKA,
   "Lakka'yı Güncelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_NAME,
   "Kullanıcı arabirimi adı"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LAKKA_VERSION,
   "Lakka Sürümü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT,
   "Yeniden Başlat"
   )

/* Environment Specific Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INTERNAL_STORAGE_STATUS,
   "Dahili depolama durumu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR,
   "Grafik Gereçleri Ölçeğini Geçersiz Kıl"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR,
   "Ekran gereçlerini çizerken el ile ölçeklendirme işlevini geçersiz kılar. Yalnızca 'Grafik Ölçeklerini Otomatik Ölçeklendir' devre dışı bırakıldığında geçerlidir. Dekore edilmiş bildirimlerin, göstergelerin ve kontrollerin boyutunu menünün kendisinden bağımsız olarak arttırmak veya azaltmak için kullanılabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_RESOLUTION,
   "Ekran Çözünürlüğü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHUTDOWN,
   "Kapat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Harici dosya erişimini etkinleştir"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Windows dosya erişim izinleri ayarlarını açın"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_PICKER,
   "Aç..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_PICKER,
   "Sistem dosyası seçiciyi kullanarak başka bir dizin açın"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_FLICKER,
   "Titreşimsiz filtre"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GAMMA,
   "Video Gama"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SOFT_FILTER,
   "Yumuşak Filtre"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_SETTINGS,
   "Kablosuz ağları tarar ve bağlantı kurar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VI_WIDTH,
   "VI Ekran Genişliğini Ayarla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Aşırı Tarama Düzeltmesi (Üst)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Görüntü boyutunu belirtilen sayıda tarama çizgisi (ekranın üst tarafından alınır) azaltarak ekran aşırı tarama kırpmasını ayarlayın. Not: Ölçekleme yapay dokulara neden olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Aşırı Tarama Düzeltmesi (Alt)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Görüntü boyutunu belirtilen sayıda tarama çizgisi (ekranın alt tarafından alınır) azaltarak ekran aşırı tarama kırpmasını ayarlayın. Not: Ölçekleme yapay dokulara neden olabilir."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSTAINED_PERFORMANCE_MODE,
   "Sürdürülebilir Performans Kipi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAL60_ENABLE,
   "PAL60 Kipi Kullan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESTART_KEY,
   "RetroArch Yeniden Başlat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_BLOCK_FRAMES,
   "Kareleri Engelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_PREFER_FRONT_TOUCH,
   "Ön Dokunma Tercihi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_ENABLE,
   "Dokunmatik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ICADE_ENABLE,
   "Klavye Oyun Kolu Eşlemesi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEYBOARD_GAMEPAD_MAPPING_TYPE,
   "Klavye Oyun Kolu Eşleme Türü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SMALL_KEYBOARD_ENABLE,
   "Ufak Klavye"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BLOCK_TIMEOUT,
   "Giriş Bloğu Zaman Aşımı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BLOCK_TIMEOUT,
   "Komple bir giriş örneği almak için beklenecek milisaniye sayısı, eşzamanlı tuşlara basıldığında sorun yaşıyorsanız kullanın (yalnızca Android için)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_REBOOT,
   "Yeniden Başlat'ı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_REBOOT,
   "'Yeniden Başlat' seçeneğini göster/gizle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SHUTDOWN,
   "Kapat'ı Göster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SHUTDOWN,
   "'Kapat' seçeneğini göster/gizle."
   )

#ifdef HAVE_LAKKA_SWITCH
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_GPU_PROFILE,
   "GPU Hız Aşırtma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_GPU_PROFILE,
   "GPU hızını arttır yada düşür"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_BACKLIGHT_CONTROL,
   "Ekran parlaklığı"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_BACKLIGHT_CONTROL,
   "Ekran parlaklığını arttır veya azalt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT_RCM,
   "RCM içinde yeniden başlat"
   )
#endif
#if defined(HAVE_LAKKA_SWITCH) || defined(HAVE_LIBNX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CPU_PROFILE,
   "CPU Hız Aşırtma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_CPU_PROFILE,
   "CPU hız aşımını değiştir"
   )
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_ENABLE,
   "Bluetooth durumunu belirler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LAKKA_SERVICES,
   "Hizmetler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SERVICES_SETTINGS,
   "İşletim sistemi düzeyinde servisleri yönetin."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "Ağ klasörlerini SMB protokolü ile paylaş."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "Uzaktan komut satırına erişmek için SSH kullanın."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCALAP_ENABLE,
   "Wi-Fi Erişim Noktası"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCALAP_ENABLE,
   "Wi-Fi Erişim Noktasını etkinleşti veya devre dışı bırak."
   )
MSG_HASH(
   MSG_LOCALAP_SWITCHING_OFF,
   "Wi-Fi Erişim Noktasını Kapatılıyor."
   )
MSG_HASH(
   MSG_WIFI_DISCONNECT_FROM,
   "Wi-Fi '%s' bağlantısnı kesiliyor"
   )
MSG_HASH(
   MSG_LOCALAP_ALREADY_RUNNING,
   "Wi-Fi Erişim Noktası zaten başlatıldı"
   )
MSG_HASH(
   MSG_LOCALAP_NOT_RUNNING,
   "Wi-Fi Erişim Noktası çalışmıyor"
   )
MSG_HASH(
   MSG_LOCALAP_STARTING,
   "Wi-Fi Erişim Noktasını SSID=%s ve Passkey=%s ile başlatılıyor"
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_CREATE,
   "Wi-Fi Erişim Noktası yapılandırma dosyası oluşturulamadı."
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_PARSE,
   "Yanlış yapılandırma dosyası -%s içinde APNAME veya PASSWORD bulunamadı"
   )
#endif
#ifdef GEKKO
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_SCALE,
   "Fare Ölçeği"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MOUSE_SCALE,
   "Wiimote lightgun hızı için x/y ölçeğini ayarlayın."
   )
#endif
#ifdef HAVE_ODROIDGO2
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RGA_SCALING,
   "RGA Ölçeklendirme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_RGA_SCALING,
   "RGA ölçeklendirme ve bikübik filtreleme. Gereçleri kırabilir."
   )
#else
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CTX_SCALING,
   "Bağlama Özgü Ölçekleme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CTX_SCALING,
   "Donanım bağlamı ölçeği (mümkün ise)."
   )
#endif
#if defined(_3DS)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "3DS Alt Ekran"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_LCD_BOTTOM,
   "Durum bilgilerinin alt ekranda görüntülenmesini etkinleştir. Pil ömrünü uzatmak ve performansı artırmak için devre dışı bırak."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_DISPLAY_MODE,
   "3DS Görüntüleme Kipi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_DISPLAY_MODE,
   "3B ve 2B ekran kipi arasında seçim yapar. '3B' kipinde pikseller kare şeklindedir ve Hızlı Menü görüntülenirken derinlik efekti uygulanır. '2B' kipi en iyi performansı sağlar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_3D,
   "3B"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D,
   "2B"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_400X240,
   "2B (Piksel Izgara Efekti)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_800X240,
   "2B (Yüksek Çözünürlük)"
   )
#endif
#ifdef HAVE_QT
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SCAN_FINISHED,
   "Tarama Tamamlandı.<br><br>\nİçeriğin doğru bir şekilde taranabilmesi için şunları yapmanız gerekir:\n<ul><li>önceden indirilmiş uyumlu bir çekirdeğe sahip olmak</li>\n<li>\"Temel Bilgi Dosyaları\" nı Çevrimiçi Güncelleyici aracılığıyla güncelle</li>\n<li>\"Veritabanları\" nı Çevrimiçi Güncelleyici aracılığıyla güncelle</li>\n<li>Yukarıdakilerden biri yeni yapılmışsa RetroArch'ı yeniden başlat</li></ul>\nSon olarak, içeriğin mevcut veritabanlarıyla eşleşmesi gerekir <a href=\"https://docs.libretro.com/guides/roms-playlists-thumbnails/#sources\">burdan</a>. Hala çalışmıyorsa, düşünün <a href=\"https://www.github.com/libretro/RetroArch/issues\">hata raporu gönder</a>."
   )
#endif
