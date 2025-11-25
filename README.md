Blink LED 練習

**專案說明**

- **目的**: 在 ESP32 上讓 LED 連接至 GPIO22 以 1Hz（每秒閃爍一次，0.5s ON / 0.5s OFF）。

**硬體需求**

- 開發板：ESP32（任一常見開發板皆可）
- LED ×1
- 電阻（220Ω）×1
- 連接線

**連線方式**

- LED 的長腳（正極）經 220Ω 電阻接到 `GPIO22`。
- LED 的短腳（負極）接地（GND）。

**程式說明**

- 程式檔案：`src/main.cpp`
- 行為：每 500 ms 將 `GPIO22` 設為 HIGH，再 500 ms 設為 LOW，達到 1 Hz 閃爍。
- 實作：使用 Arduino API（`pinMode` / `digitalWrite` / `delay`），可直接用 PlatformIO 編譯上傳。

**如何建置與上傳（PowerShell）**

- 於專案根目錄執行：
```powershell
pio run
```

- 編譯並上傳到已連接的 ESP32：
```powershell
pio run -t upload
```

- 編譯、上傳並開啟序列埠監看（先上傳再開監看）：
```powershell
pio run -t upload; pio device monitor
```

**序列埠監看**

- 若程式輸出或序列相關資訊，可用 `pio device monitor` 觀看。預設波特率請參考 `platformio.ini`（若未設定，通常預設 115200）。

**進階（非阻塞閃爍）**

- 若未來需要在閃爍時同時做其他工作，建議改用 `millis()` 實作非阻塞式閃爍。需要我幫你把 `src/main.cpp` 改成非阻塞版本嗎？

---

檔案：`src/main.cpp` 已實作簡單阻塞式 1Hz 閃爍。歡迎告訴我是否要加入更多說明或範例。 
