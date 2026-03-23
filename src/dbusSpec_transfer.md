# D-Bus 規格（Specification）

### Anders Carlsson

### Alexander Larsson

### Sven Herzberg

### Simon McVittie

### David Zeuthen

版本 0.43

- 修訂歷史（Revision History）：Revision latest
- 修訂歷史（Revision History）：See commit log
- 修訂歷史（Revision History）：Revision 0.43
	- 2024-10-29
- 修訂歷史（Revision History）：建議從 /etc、/run 載入 system services；文件化 Stats 介面；文件化 Verbose 介面
- 修訂歷史（Revision History）：Revision 0.42
	- 2023-08-21
- 修訂歷史（Revision History）：GetConnectionCredentials 可以回傳 ProcessFD
- 修訂歷史（Revision History）：Revision 0.41
	- 2023-02-08
- 修訂歷史（Revision History）：釐清 /run 與 /var/run 的預期處理方式
- 修訂歷史（Revision History）：Revision 0.40
	- 2022-10-05
- 修訂歷史（Revision History）：釐清 unix:tmpdir 並非一定需要使用 Linux 的 abstract socket；說明 abstract sockets 對 Linux namespacing 的影響
- 修訂歷史（Revision History）：Revision 0.39
	- 2022-09-22
- 修訂歷史（Revision History）：文件化 reversed domain names 中對 IDN 的建議；釐清 AF_UNIX sockets 相關文件
- 修訂歷史（Revision History）：Revision 0.38
	- 2022-02-23
- 修訂歷史（Revision History）：新增 ActivatableServicesChanged signal 與 feature flag；addresses 中的 `*` 可選擇性地 escape
- 修訂歷史（Revision History）：Revision 0.37
	- 2021-12-17
- 修訂歷史（Revision History）：更新 interoperable 的 DBUS_COOKIE_SHA1 timeouts 建議；釐清 arrays 與 variants 的 padding 要求；描述 interoperable machine ID 的來源；釐清 dictionary（array of dict-entry）types 的使用
- 修訂歷史（Revision History）：Revision 0.36
	- 2020-04-21
- 修訂歷史（Revision History）：修正訊息（message）部分 annotated hexdump 的一個錯字
- 修訂歷史（Revision History）：Revision 0.35
	- 2019-05-13
- 修訂歷史（Revision History）：GetConnectionCredentials 新增 UnixGroupIDs；避免在定義 interface name 語法時的冗餘
- 修訂歷史（Revision History）：Revision 0.34
	- 2018-12-04
	- pwithnall
- 修訂歷史（Revision History）：修正 ObjectManager 範例的 AddMatch 規則
- 修訂歷史（Revision History）：Revision 0.33
	- 2018-04-27
	- smcv
- 修訂歷史（Revision History）：在 Unix 上 deprecate TCP；在所有地方 deprecate 非本機 TCP
- 修訂歷史（Revision History）：Revision 0.32
	- 2018-01-30
	- smcv
- 修訂歷史（Revision History）：在 bus names 中 deprecate hyphen/minus，並建議改用 underscore；文件化 escape 開頭數字的慣例（interface 與 bus names，如 `org._7_zip`）；在可能時建議使用 SASL EXTERNAL，否則使用 DBUS_COOKIE_SHA1；message buses 不應接受 SASL ANONYMOUS；文件化 non-empty 的 SASL authorization identity strings 的含義；文件化 SASL ERROR 的 optional argument；文件化誰會送出每個 SASL command，以及可能的 replies；文件化用來協商 Unix fd-passing 的 authentication states；轉送訊息的 servers 應移除它們不理解的 header fields；釐清誰控制每個 header field；文件化 HeaderFiltering message bus feature flag；非 message-bus servers 可能使用 SENDER 與 DESTINATION fields
- 修訂歷史（Revision History）：Revision 0.31
	- 2017-06-29
	- smcv, TG
- 修訂歷史（Revision History）：不要求 implementation-specific 的 search paths 必須是最低優先；修正 optionally-escaped bytes in addresses 的 regex 語法，使其如預期包含 hyphen-minus、forward slash 與 underscore；在同一節描述所有 message bus methods；釐清呼叫 message bus methods 時正確的 object path；文件化 message bus 實作了 Introspectable、Peer 與 Properties；新增 Features 與 Interfaces properties 作為 message bus feature-discovery；新增 unix:dir=...（類似 unix:tmpdir=... 但永不使用 abstract sockets）；不要求從不夠特權、無法成功使用 eavesdrop 的連線也必須接受 eavesdrop='true'；正式以 BecomeMonitor 取代 eavesdropping 並將後者 deprecate
- 修訂歷史（Revision History）：Revision 0.30
	- 2016-11-28
	- smcv, PW
- 修訂歷史（Revision History）：更清楚定義術語 service activation 與 auto-starting；文件化 service files 中的 SystemdService key；文件化 AppArmor 如何與 service activation 互動，以及 service files 中新的 AssumedAppArmorLabel key（dbus-daemon 1.11.8）；釐清 Properties.GetAll 的預期行為；多數範例使用 versioned interface 與 bus names
- 修訂歷史（Revision History）：Revision 0.29
	- 2016-10-10
	- PW
- 修訂歷史（Revision History）：Introspection arguments 可能包含 annotations；建議不要使用 object path '/'
- 修訂歷史（Revision History）：Revision 0.28
	- 2016-08-15
	- PW
- 修訂歷史（Revision History）：釐清 serialization
- 修訂歷史（Revision History）：Revision 0.27
	- 2015-12-02
	- LU
- 修訂歷史（Revision History）：services 不應送出不必要的 replies
- 修訂歷史（Revision History）：Revision 0.26
	- 2015-02-19
	- smcv, rh
- 修訂歷史（Revision History）：GetConnectionCredentials 可以回傳 LinuxSecurityLabel 或 WindowsSID；新增特權（privileged）的 BecomeMonitor method
- 修訂歷史（Revision History）：Revision 0.25
	- 2014-11-10
	- smcv, lennart
- 修訂歷史（Revision History）：ALLOW_INTERACTIVE_AUTHORIZATION flag、EmitsChangedSignal=const
- 修訂歷史（Revision History）：Revision 0.24
	- 2014-10-01
	- SMcV
- 修訂歷史（Revision History）：non-method-calls 即使沒有 NO_REPLY_EXPECTED 也永遠不期待回覆；文件化如何引用（quote）match rules
- 修訂歷史（Revision History）：Revision 0.23
	- 2014-01-06
	- SMcV, CY
- 修訂歷史（Revision History）：method call messages 若沒有 INTERFACE 可能被視為錯誤；文件化 tcp:bind=... 與 nonce-tcp:bind=...；定義 listenable 與 connectable addresses
- 修訂歷史（Revision History）：Revision 0.22
	- 2013-10-09
- 修訂歷史（Revision History）：新增 GetConnectionCredentials；文件化 GetAtdAuditSessionData；文件化 GetConnectionSELinuxSecurityContext；文件化並修正 .service file 語法與命名
- 修訂歷史（Revision History）：Revision 0.21
	- 2013-04-25
	- smcv
- 修訂歷史（Revision History）：允許 UTF-8 中的 Unicode noncharacters（Unicode Corrigendum #9）
- 修訂歷史（Revision History）：Revision 0.20
	- 22 February 2013
	- smcv, walters
- 修訂歷史（Revision History）：為了更清楚而重新整理；移除關於 basic types 的錯誤說法；提到 /o/fd/DBus
- 修訂歷史（Revision History）：Revision 0.19
	- 20 February 2012
	- smcv/lp
- 修訂歷史（Revision History）：正式定義 unique connection names 與 well-known bus names；文件化 interface、bus、member、error names 的 best practices，以及 object paths；文件化 Unix 上 session/system services 的 search path；文件化 systemd transport
- 修訂歷史（Revision History）：Revision 0.18
	- 29 July 2011
	- smcv
- 修訂歷史（Revision History）：定義 eavesdropping、unicast、broadcast；新增 eavesdrop match keyword；將 type system 提升為頂層章節
- 修訂歷史（Revision History）：Revision 0.17
	- 1 June 2011
	- smcv/davidz
- 修訂歷史（Revision History）：定義 ObjectManager；保留（reserve）GVariant 使用的額外 pseudo-type-codes
- 修訂歷史（Revision History）：Revision 0.16
	- 11 April 2011
- 修訂歷史（Revision History）：新增 path_namespace、arg0namespace；argNpath 可匹配 object paths
- 修訂歷史（Revision History）：Revision 0.15
	- 3 November 2010
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.14
	- 12 May 2010
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.13
	- 23 Dezember 2009
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.12
	- 7 November, 2006
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.11
	- 6 February 2005
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.10
	- 28 January 2005
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.9
	- 7 Januar 2005
- 修訂歷史（Revision History）：
- 修訂歷史（Revision History）：Revision 0.8
	- 06 September 2003
- 修訂歷史（Revision History）：首次釋出的文件。

---

## 介紹（Introduction）

D-Bus 是一個低負擔（low-overhead）、容易使用的跨行程通訊（interprocess communication, IPC）系統。更詳細地說：

- D-Bus 之所以是 _low-overhead_，是因為它使用二進位協定（binary protocol），不需要在 XML 之類的文字格式之間來回轉換。由於 D-Bus 的目標是用在可能高解析度、同一台機器上的 IPC，而不是主要用於 Internet IPC，因此這是一個有意義的最佳化。D-Bus 也被設計成盡量避免 round trips，並允許非同步操作（asynchronous operation），很像 X protocol。
- D-Bus 之所以 _easy to use_，是因為它以 _messages_ 為基本單位，而不是 byte streams，並且會自動處理許多困難的 IPC 問題。此外，D-Bus library 被設計成可以被包裝（wrapped），讓開發者能使用其 framework 既有的 object/type system，而不是為了 IPC 額外學一套新的。

基本的 D-Bus protocol 是一對一（one-to-one；peer-to-peer 或 client-server）的 protocol，規格在
[“Message Protocol”](#message-protocol "Message Protocol") 章節中。
也就是說，它是讓一個 application 與另一個單一 application 溝通的系統。不過，這個 protocol 的主要預期用途是 D-Bus _message bus_，其規格在
[“Message Bus Specification”](#message-bus "Message Bus Specification") 章節中。
message bus 是一個特殊的 application：它接受多個其他 applications 的連線，並在它們之間轉送（forward）messages。

D-Bus 的用途包含：通知系統變更（例如通知相機何時插入電腦、或某個軟體的新版本已安裝），或是桌面互通性（desktop interoperability），例如檔案監控服務或設定服務。

D-Bus 的設計主要針對兩個特定用例：

- 一個 "system bus"：用於從系統向使用者 session 發出通知，並允許系統向使用者 session 請求輸入。
- 一個 "session bus"：用於實作像 GNOME 與 KDE 這類的桌面環境。

D-Bus 並不打算成為針對任何可能的 application 的通用 IPC 系統，因此刻意省略了其他 IPC 系統常見的許多功能。

同時，bus daemons 也提供了一些其他 IPC 系統沒有的功能，例如單一擁有者（single-owner）的 "bus names"（類似 X selections）、按需（on-demand）啟動 services，以及安全策略（security policies）。在許多方面，這些特性才是開發 D-Bus 的主要動機；如果 IPC 是唯一目標，其實其他系統就足夠了。

D-Bus 也可能在未預期的應用中派上用場，但本規格與 reference implementation 的未來版本很可能不會納入那些會干擾核心用例的功能。

本文中的關鍵字 "MUST"、"MUST NOT"、"REQUIRED"、"SHALL"、"SHALL NOT"、"SHOULD"、"SHOULD NOT"、"RECOMMENDED"、"MAY" 與 "OPTIONAL" 應依 RFC 2119 的描述來解讀。不過，本文仍需要一次認真的稽核（audit）以確保這樣的解讀在全文中都合理。另外，這些關鍵字在本文中並未以全大寫呈現。

### Protocol 與 Specification 的穩定性（Stability）

D-Bus protocol 自 2006 年 11 月 8 日起即已凍結（frozen）（只允許相容的擴充）。然而，這份 specification 仍需要不少工作，才能在不參考 D-Bus reference implementation 的情況下，讓可互通（interoperable）的重新實作成為可能。因此，這份 specification 尚未標記為 1.0。若要標記為 1.0，我們希望有人投入相當的精力，釐清規格語句，並擴充規格內容以涵蓋 reference implementation 行為的更多面向。

在這些工作完成之前，任何嘗試重新實作 D-Bus 的行為，很可能都需要閱讀 reference implementation，並/或在 D-Bus mailing list 上詢問預期行為的細節。非常歡迎在 mailing list 提問。

儘管如此，這份文件應該仍能成為一個有用的起點，並且就我們所知是正確的（雖然不完整）。

## 型別系統（Type System）

D-Bus 有一套型別系統，能以標準方式將各種型別的值序列化（serialize）成一串位元組（bytes），這串位元組被稱為 _wire format_。將某種其他表示法的值轉換成 wire format 稱為 _marshaling_，而從 wire format 轉換回來稱為 _unmarshaling_。

D-Bus protocol 不會在 marshaled data 中包含型別標記（type tags）；一個 marshaled values 的區塊必須有已知的 _type signature_。type signature 由 0 個或多個 _single complete types_ 組成，而每個 single complete type 又由 1 個或多個 _type codes_ 組成。

type code 是一個 ASCII 字元，用來表示某個值的型別。因為使用 ASCII 字元，type signature 永遠會形成一個有效的 ASCII 字串。只要做簡單的字串比較，就能判斷兩個 type signature 是否等價。

single complete type 是一段 type codes 序列，能完整描述一個型別：要嘛是一個 basic type，要嘛是一個已完整描述的 container type。single complete type 可以是 basic type code、variant type code、帶有元素型別的 array，或帶有欄位的 struct（都在下文定義）。因此，下面這些 signatures 不是 single complete types：

```
				"aa"

```

```
				"(ii"

```

```
				"ii)"

```

而下面這些 signatures 包含多個 complete types：

```
				"ii"

```

```
				"aiai"

```

```
				"(ii)(ii)"

```

不過請注意：一個 single complete type 仍可能透過包含 struct 或 dict entry，來 _包含_ 多個其他的 single complete types。

### 基本型別（Basic types）

最簡單的 type codes 是 _basic types_，也就是其結構完全由單一字元 type code 定義的型別。basic types 由 fixed types 與 string-like types 組成。

_fixed types_ 是值長度固定的 basic types，也就是 BYTE、BOOLEAN、DOUBLE、UNIX_FD，以及長度為 16、32、64 位元的 signed/unsigned integers。

作為一個簡單例子，32-bit integer（`INT32`）的 type code 是 ASCII 字元 'i'。因此，包含單一 `INT32` 的一個 value block，其 signature 會是：

```
					"i"

```

而包含兩個 `INT32` 的 value block，其 signature 會是：

```
					"ii"

```

fixed types 的特性如下表：

- 傳統名稱（Conventional name）：BYTE
	- ASCII type-code：y (121)
	- Encoding：Unsigned 8-bit integer
- 傳統名稱（Conventional name）：BOOLEAN
	- ASCII type-code：b (98)
	- Encoding：Boolean value：0 是 false，1 是 true；marshalling format 所允許的其他值都屬無效（invalid）
- 傳統名稱（Conventional name）：INT16
	- ASCII type-code：n (110)
	- Encoding：Signed（two's complement）16-bit integer
- 傳統名稱（Conventional name）：UINT16
	- ASCII type-code：q (113)
	- Encoding：Unsigned 16-bit integer
- 傳統名稱（Conventional name）：INT32
	- ASCII type-code：i (105)
	- Encoding：Signed（two's complement）32-bit integer
- 傳統名稱（Conventional name）：UINT32
	- ASCII type-code：u (117)
	- Encoding：Unsigned 32-bit integer
- 傳統名稱（Conventional name）：INT64
	- ASCII type-code：x (120)
	- Encoding：Signed（two's complement）64-bit integer（助記：x 與 t 是 "sixty" 中還沒被更常見用途使用的第一個字母）
- 傳統名稱（Conventional name）：UINT64
	- ASCII type-code：t (116)
	- Encoding：Unsigned 64-bit integer
- 傳統名稱（Conventional name）：DOUBLE
	- ASCII type-code：d (100)
	- Encoding：IEEE 754 double-precision floating point
- 傳統名稱（Conventional name）：UNIX_FD
	- ASCII type-code：h (104)
	- Encoding：Unsigned 32-bit integer，用來表示一個 index，指向以 out-of-band 方式傳遞（透過某個 platform-specific 機制）的一個 file descriptors 陣列（助記：h 表示 handle）

_string-like types_ 是長度可變的 basic types。任何 string-like type 的值，在概念上都是以 UTF-8 編碼的 0 個或多個 Unicode codepoints，其中不得包含 U+0000。UTF-8 文字必須被嚴格驗證：特別是，不得包含 overlong sequences，也不得包含大於 U+10FFFF 的 codepoints。

自 D-Bus Specification 版本 0.21 起，依 Unicode Corrigendum #9，UTF-8 strings 允許 "noncharacters" U+FDD0..U+FDEF、U+nFFFE 與 U+nFFFF（但請注意：較舊版本的 D-Bus 會拒絕這些 noncharacters）。

string-like types 的 marshalling formats 都會以一個 0（NUL）byte 作結尾，但該 byte 不被視為文字的一部分。

string-like types 的特性如下表：

- 傳統名稱（Conventional name）：STRING
	- ASCII type-code：s (115)
	- Validity constraints：無額外限制
- 傳統名稱（Conventional name）：OBJECT_PATH
	- ASCII type-code：o (111)
	- Validity constraints：必須是語法上有效（syntactically valid）的 object path
- 傳統名稱（Conventional name）：SIGNATURE
	- ASCII type-code：g (103)
	- Validity constraints：0 個或多個 single complete types

#### 有效的 Object Paths（Valid Object Paths）

object path 是用來指向某個 object instance 的名稱。在概念上，D-Bus 訊息交換的每個參與者都可以擁有任意數量的 object instances（可類比 C++ 或 Java objects），而每個 instance 都會有一個 path。像檔案系統一樣，一個 application 中的 object instances 會形成一棵階層式的樹。

object paths 常見的 namespacing 方式，是以 reversed domain name 開頭並包含 interface version number，類似於
[interface names](#message-protocol-names-interface "Interface names") 與
[well-known bus names](#message-protocol-names-bus "Bus names")。
這讓我們能在同一個 process 中實作多個 service，或同一個 service 的多個版本，即使這些 services 共用一個 connection 但無法以其他方式互相合作（例如它們由不同的 plugins 實作）。

允許使用 `/` 作為 object path，但不建議，因為這會讓 interface 的版本管理變得困難。從某個 D-Bus object 發出的任何 signals，都會與該 service 的 unique bus name 關聯，而不是與其 well-known name。這代表 signal 的接收者必須完全依賴 signal name 與 object path，才能判斷該 signal 源自哪個 interface。

例如，若 `example.com` 的擁有者正在為某個 music player 開發 D-Bus API，他們可能會使用以 `/com/example/MusicPlayer1` 開頭的 object paths 階層來表示其 objects。

以下規則定義了一個有效的 object path。實作（implementations）不得送出或接受帶有無效 object paths 的 messages。

- path 可以是任何長度。
- path 必須以 ASCII '/'（整數 47）字元開頭，並由以 slash 字元分隔的元素（elements）組成。
- 每個 element 只能包含 ASCII 字元 "\[A-Z\]\[a-z\]\[0-9\]\_"
- 不得有任何 element 為空字串。
- 不得出現連續多個 '/' 字元。
- 除非 path 是 root path（單一 '/' 字元），否則不得以 '/' 結尾。

#### 有效的 Signatures（Valid Signatures）

實作不得送出或接受無效的 signatures。有效 signatures 必須符合以下規則：

- signature 是 single complete types 的列表。arrays 必須有 element types，而 structs 必須有成對的 open/close parentheses。
- signature 中只允許 type codes、open/close parentheses、open/close curly brackets。`STRUCT` type code 不允許出現在 signatures 中，因為會改用 parentheses。同樣地，`DICT_ENTRY` type code 也不允許出現在 signatures 中，因為會改用 curly brackets。
- container type nesting 的最大深度為：32 個 array type codes 與 32 個 open parentheses。這代表總遞迴深度最大為 64，例如 "array of array of array of ... struct of struct of struct of ..."，其中有 32 個 array 與 32 個 struct。
- signature 的最大長度為 255。

當 signatures 出現在 messages 中時，marshalling format 會保證它們後面會接著一個 nul byte（可視為 C-style 字串終止，或 INVALID type-code），但在概念上這不屬於 signature 的一部分。

### 容器型別（Container types）

除了 basic types，還有四種 _container_ types：`STRUCT`、`ARRAY`、`VARIANT` 與 `DICT_ENTRY`。

`STRUCT` 的 type code 是 ASCII 字元 'r'，但該 type code 不會出現在 signatures 中。相反地，會用 ASCII 字元 '(' 與 ')' 來標記 struct 的開始與結束。例如，一個包含兩個 integers 的 struct，其 signature 會是：

```
					"(ii)"

```

structs 可以巢狀（nested）。例如，一個包含 integer 與另一個 struct 的 struct：

```
					"(i(ii))"

```

儲存該 struct 的 value block 會包含三個 integers；type signature 讓你能區分 "(i(ii))"、"((ii)i)"、"(iii)" 或 "iii"。

`STRUCT` type code 'r' 目前不在 D-Bus protocol 中使用，但對於實作該 protocol 的程式碼很有用。規格之所以定義此 type code，是為了讓這類程式碼能在非 protocol 的情境中互通。

不允許空的 structures；括號之間必須至少有一個 type code。

`ARRAY` 的 type code 是 ASCII 字元 'a'。array type code 之後必須接一個 _single complete type_，也就是每個 array element 的型別。例如：

```
					"ai"

```

這是一個 32-bit integers 的陣列。不過 array 可以包含任何型別，例如「每個元素都是帶兩個 int32 欄位的 struct」的 array：

```
					"a(ii)"

```

或是「array of array of integer」：

```
					"aai"

```

`VARIANT` 的 type code 是 ASCII 字元 'v'。一個 `VARIANT` 型別的 marshaled value，會把一個 single complete type 的 signature 作為其 _value_ 的一部分；該 signature 之後會接著一個該型別的 marshaled value。

不同於 message signature，variant signature 只能包含一個 single complete type。因此 "i"、"ai" 或 "(ii)" 是 OK 的，但 "ii" 不是。variants 的使用不得使總 message depth 大於 64（包含其他 container types，例如 structures）。

`DICT_ENTRY` 的運作方式完全像 struct，但它用 curly braces 而不是 parentheses，且有更多限制：它只能作為 array element type 出現；curly braces 內必須剛好包含兩個 single complete types；第一個 single complete type（"key"）必須是 basic type 而不能是 container type。實作不得接受 arrays 之外的 dict entries，不得接受欄位數為 0、1 或大於 2 的 dict entries，也不得接受 key 不是 basic type 的 dict entries。dict entry 永遠是一組 key-value pair。

`DICT_ENTRY` 的第一個欄位永遠是 key。若同一個 `DICT_ENTRY` array 內同一個 key 出現兩次，message 可被視為損壞（corrupt）。不過，出於效能考量，實作不被要求一定要拒絕帶有重複 keys 的 dict。

在多數語言中，array of dict entry 通常會被表示成 map、hash table 或 dict object。

### 型別摘要（Summary of types）

下表摘要 D-Bus types。

- 類別（Category）：reserved
	- 傳統名稱（Conventional Name）：INVALID
	- Code：0（ASCII NUL）
	- 描述（Description）：不是有效的 type code，用來終止（terminate）signatures
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：BYTE
	- Code：121（ASCII 'y'）
	- 描述（Description）：8-bit unsigned integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：BOOLEAN
	- Code：98（ASCII 'b'）
	- 描述（Description）：Boolean value，0 是 FALSE、1 是 TRUE；其他值都無效（invalid）。
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：INT16
	- Code：110（ASCII 'n'）
	- 描述（Description）：16-bit signed integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：UINT16
	- Code：113（ASCII 'q'）
	- 描述（Description）：16-bit unsigned integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：INT32
	- Code：105（ASCII 'i'）
	- 描述（Description）：32-bit signed integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：UINT32
	- Code：117（ASCII 'u'）
	- 描述（Description）：32-bit unsigned integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：INT64
	- Code：120（ASCII 'x'）
	- 描述（Description）：64-bit signed integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：UINT64
	- Code：116（ASCII 't'）
	- 描述（Description）：64-bit unsigned integer
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：DOUBLE
	- Code：100（ASCII 'd'）
	- 描述（Description）：IEEE 754 double
- 類別（Category）：string-like, basic
	- 傳統名稱（Conventional Name）：STRING
	- Code：115（ASCII 's'）
	- 描述（Description）：UTF-8 string（必須是有效 UTF-8）。必須以 nul 結尾，且不得包含其他 nul bytes。
- 類別（Category）：string-like, basic
	- 傳統名稱（Conventional Name）：OBJECT_PATH
	- Code：111（ASCII 'o'）
	- 描述（Description）：某個 object instance 的名稱
- 類別（Category）：string-like, basic
	- 傳統名稱（Conventional Name）：SIGNATURE
	- Code：103（ASCII 'g'）
	- 描述（Description）：type signature
- 類別（Category）：container
	- 傳統名稱（Conventional Name）：ARRAY
	- Code：97（ASCII 'a'）
	- 描述（Description）：Array
- 類別（Category）：container
	- 傳統名稱（Conventional Name）：STRUCT
	- Code：114（ASCII 'r'）、40（ASCII '('）、41（ASCII ')'）
	- 描述（Description）：Struct；type code 114 'r' 保留給 bindings 與 implementations，用以表示「struct」的一般概念，不得出現在 D-Bus 使用的 signatures 中。
- 類別（Category）：container
	- 傳統名稱（Conventional Name）：VARIANT
	- Code：118（ASCII 'v'）
	- 描述（Description）：Variant type（值的型別是值本身的一部分）
- 類別（Category）：container
	- 傳統名稱（Conventional Name）：DICT_ENTRY
	- Code：101（ASCII 'e'）、123（ASCII '{'）、125（ASCII '}'）
	- 描述（Description）：dict 或 map 的一個 entry（key-value pairs 的陣列）。type code 101 'e' 保留給 bindings 與 implementations，用以表示「dict/dict-entry」的一般概念，不得出現在 D-Bus 使用的 signatures 中。
- 類別（Category）：fixed, basic
	- 傳統名稱（Conventional Name）：UNIX_FD
	- Code：104（ASCII 'h'）
	- 描述（Description）：Unix file descriptor
- 類別（Category）：reserved
	- 傳統名稱（Conventional Name）：（reserved）
	- Code：109（ASCII 'm'）
	- 描述（Description）：保留給與 GVariant 的 maybe type 相容的型別；在此處被規格化之前，不得出現在 D-Bus 使用的 signatures 中
- 類別（Category）：reserved
	- 傳統名稱（Conventional Name）：（reserved）
	- Code：42（ASCII '*'）
	- 描述（Description）：保留給 bindings/implementations，用以表示任何 single complete type；不得出現在 D-Bus 使用的 signatures 中。
- 類別（Category）：reserved
	- 傳統名稱（Conventional Name）：（reserved）
	- Code：63（ASCII '?'）
	- 描述（Description）：保留給 bindings/implementations，用以表示任何 basic type；不得出現在 D-Bus 使用的 signatures 中。
- 類別（Category）：reserved
	- 傳統名稱（Conventional Name）：（reserved）
	- Code：64（ASCII '@'）、38（ASCII '&'）、94（ASCII '^'）
	- 描述（Description）：保留給 bindings/implementations 的內部用途；不得出現在 D-Bus 使用的 signatures 中。GVariant 使用這些 type-codes 來編碼 calling conventions。

## 編組（Marshaling）（Wire Format）

D-Bus 為其型別系統定義了一種 marshalling format，並用於 D-Bus messages。這並不是該型別系統唯一可能的 marshalling format：例如，GVariant（GLib 的一部分）會重用 D-Bus 型別系統，但實作了另一種 marshalling format。

### Byte order 與 alignment

給定一個 type signature，一個 bytes 區塊就可以被轉換為帶型別的值。本節描述該 bytes 區塊的格式。Byte order 與 alignment 的問題會以對所有 D-Bus types 都一致的方式處理。

一個 bytes 區塊會有其對應的 byte order。byte order 必須以某種方式被得知；對於 D-Bus messages，byte order 是 message header 的一部分，如
[“Message Format”](#message-protocol-messages "Message Format") 章節所述。
在此先假設 byte order 已知，且為 little endian 或 big endian。

bytes 區塊中的每個值都會以「自然（natural）」方式對齊（aligned）。例如 4-byte 的值會對齊到 4-byte 邊界，8-byte 的值會對齊到 8-byte 邊界。邊界的計算是全域性的，並以 message 的第一個 byte 作為基準。要讓某個值能正確對齊，在該值之前可能需要 _alignment padding_。alignment padding 必須永遠是讓後續值正確對齊所需的最小 padding；並且必須永遠由 nul bytes 組成。alignment padding 不得未初始化（不能包含垃圾資料），也不得使用超過需求的 padding。

作為自然對齊的例外，`STRUCT` 與 `DICT_ENTRY` 值永遠對齊到 8-byte 邊界，不論其內容原本的對齊需求為何。

### 編組基本型別（Marshalling basic types）

要 marshal 與 unmarshal fixed types，只需要依 signature 中每個 type code，從資料區塊讀出對應的一個值即可。所有 signed integer values 以 two's complement 編碼；DOUBLE values 為 IEEE 754 double-precision floating-point；BOOLEAN values 以 32 bits 編碼（其中只有 least significant bit 會被使用）。

string-like types（STRING、OBJECT_PATH、SIGNATURE）都會以固定長度的 unsigned integer `n` 來編組（marshalled），其中 `n` 表示可變長度部分的長度，接著是 `n` 個非零的 UTF-8 文字 bytes，再接著是一個單一的 0（nul）byte（此 byte 不視為文字的一部分）。string-like type 的 alignment 與 `n` 的 alignment 相同：任何對 `n` 所需的 padding 都會緊接在 `n` 之前出現。`n` 與字串文字之間永遠不會有 alignment padding；字串文字與結尾的 nul 之間也不會有 alignment padding。message 中下一個值（若存在）的 alignment padding 會從結尾的 nul 之後開始。

對 STRING 與 OBJECT_PATH 而言，`n` 以 4 bytes（`UINT32`）編碼，因此需要 4-byte alignment。對 SIGNATURE 而言，`n` 以單一 byte（`UINT8`）編碼。因此在 SIGNATURE 之前永遠不需要 alignment padding。

例如，若在 little-endian message 中，目前位置距離 message 開頭是 8 bytes 的倍數，字串 ‘foo’、‘+’、‘bar’ 會依序序列化如下：

```
																					不需要 padding，因為目前已是 4 的倍數
0x03 0x00 0x00 0x00                       ‘foo’ 的長度 = 3
										0x66 0x6f 0x6f        ‘foo’
																	 0x00   結尾的 nul

																					不需要 padding，因為目前已是 4 的倍數
0x01 0x00 0x00 0x00                       ‘+’ 的長度 = 1
										0x2b                  ‘+’
												 0x00             結尾的 nul

															 0x00 0x00  補 2 bytes 的 padding，使其到達下一個 4 的倍數
0x03 0x00 0x00 0x00                       ‘bar’ 的長度 = 3
										0x62 0x61 0x72        ‘bar’
																		0x00  結尾的 nul

```

### 編組容器（Marshalling containers）

Arrays 會以 `UINT32` `n` 來編組，其中 `n` 表示 array data 的長度（以 bytes 為單位），接著是對齊到 array element type 的 alignment boundary 所需的 alignment padding，再接著是 `n` bytes 的 array elements 依序（in sequence）marshalled 的內容。`n` 不包含長度欄位之後的 padding，也不包含最後一個 element 之後的任何 padding。也就是說，`n` 應該可以被 array 中的 element 數量整除。請注意：第一個 element 的 alignment padding 是必須的，即使其實沒有第一個 element（也就是空陣列，此時 `n` 為 0）。

例如，若 message 中目前位置是 8 bytes 的倍數且 byte-order 是 big-endian，一個只包含 64-bit integer 5 的 array 會被編組為：

```
00 00 00 08               n = 8 bytes 的資料
00 00 00 00               padding 到 8-byte 邊界
00 00 00 00  00 00 00 05  第一個 element = 5

```

Arrays 的最大長度被定義為 $2^{26}$，也就是 67108864（64 MiB）。實作不得送出或接受超過此長度的 arrays。

Structs 與 dict entries 會以與其內容相同的方式編組，但它們永遠對齊到 8-byte boundary，即使其內容通常只需要更寬鬆的對齊。

Variants 會以其內容的 `SIGNATURE`（必須是一個 single complete type）來編組，後面再接著以該 signature 指定型別所 marshalled 的值。variant 與 signature 一樣具有 1-byte alignment，這代表 variant 之前永遠不需要 alignment padding。variants 的使用不得使 total message depth 大於 64（包含其他 container types，例如 structures）。（見
[Valid Signatures](#message-protocol-marshaling-signature "Valid Signatures")。）

請注意：雖然 variant 本身不需要任何 alignment padding，但其所包含的值仍需要依其型別的 alignment 規則進行 padding。

例如，若 message 中目前位置是 8 bytes 的倍數且 byte-order 是 big-endian，一個包含 64-bit integer 5 的 variant 會被編組為：

```
0x01 0x74 0x00                          signature bytes（length = 1，signature = 't'，以及結尾的 nul）
							 0x00 0x00 0x00 0x00 0x00 padding 到 8-byte boundary
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05 內容值的 8 bytes

```

### D-Bus 編組摘要（Summary of D-Bus marshalling）

綜合以上，types 在 wire 上的 marshaling 方式如下：

- 傳統名稱（Conventional Name）：INVALID
	- Encoding：不適用；無法被 marshaled。
	- Alignment：N/A
- 傳統名稱（Conventional Name）：BYTE
	- Encoding：單一 8-bit byte。
	- Alignment：1
- 傳統名稱（Conventional Name）：BOOLEAN
	- Encoding：與 UINT32 相同，但只有 0 與 1 是有效值。
	- Alignment：4
- 傳統名稱（Conventional Name）：INT16
	- Encoding：依 message 的 byte order 編碼的 16-bit signed integer。
	- Alignment：2
- 傳統名稱（Conventional Name）：UINT16
	- Encoding：依 message 的 byte order 編碼的 16-bit unsigned integer。
	- Alignment：2
- 傳統名稱（Conventional Name）：INT32
	- Encoding：依 message 的 byte order 編碼的 32-bit signed integer。
	- Alignment：4
- 傳統名稱（Conventional Name）：UINT32
	- Encoding：依 message 的 byte order 編碼的 32-bit unsigned integer。
	- Alignment：4
- 傳統名稱（Conventional Name）：INT64
	- Encoding：依 message 的 byte order 編碼的 64-bit signed integer。
	- Alignment：8
- 傳統名稱（Conventional Name）：UINT64
	- Encoding：依 message 的 byte order 編碼的 64-bit unsigned integer。
	- Alignment：8
- 傳統名稱（Conventional Name）：DOUBLE
	- Encoding：依 message 的 byte order 編碼的 64-bit IEEE 754 double。
	- Alignment：8
- 傳統名稱（Conventional Name）：STRING
	- Encoding：一個 UINT32，表示字串的長度（bytes，且不包含終止的 nul），後面接著該長度的非 nul 字串資料，再接著一個終止的 nul byte。
	- Alignment：4（對 length 而言）
- 傳統名稱（Conventional Name）：OBJECT_PATH
	- Encoding：與 STRING 完全相同，但內容必須是有效的 object path（見上文）。
	- Alignment：4（對 length 而言）
- 傳統名稱（Conventional Name）：SIGNATURE
	- Encoding：與 STRING 類似，但 length 是單一 byte（因此 signatures 最大長度為 255），且內容必須是有效 signature（見上文）。
	- Alignment：1
- 傳統名稱（Conventional Name）：ARRAY
	- Encoding：一個 UINT32，表示 array data 的長度（以 bytes 計），後面接著對齊到 array element type 的 alignment boundary 所需的 padding，再接著每個 array element。
	- Alignment：4（對 length 而言）
- 傳統名稱（Conventional Name）：STRUCT
	- Encoding：不論 struct fields 的型別為何，struct 必須從 8-byte boundary 開始。struct 值由每個欄位依序 marshaled 的內容組成，並以該 8-byte alignment boundary 為起點。
	- Alignment：8
- 傳統名稱（Conventional Name）：VARIANT
	- Encoding：一個 single complete type 的 marshaled SIGNATURE，後面接著由該 signature 指定型別的 marshaled 值。
	- Alignment：1（signature 的 alignment）
- 傳統名稱（Conventional Name）：DICT_ENTRY
	- Encoding：與 STRUCT 相同。
	- Alignment：8
- 傳統名稱（Conventional Name）：UNIX_FD
	- Encoding：依 message 的 byte order 編碼的 32-bit unsigned integer。實際的 file descriptors 需要透過某個 platform-specific 機制 out-of-band 傳輸。在 wire 上，此型別的值會儲存該 file descriptor 在隨 message 一起附帶的 file descriptors 陣列中的 index。
	- Alignment：4

## 訊息協定（Message Protocol）

一個 _message_ 由 _header_ 與 _body_ 組成。若把 message 想成一個包裹（package），header 就像地址，而 body 包含包裹內容。message 的投遞系統（delivery system）使用 header 的資訊來決定要把 message 送到哪裡，以及要如何解讀（interpret）它；接收端（recipient）則解讀 message 的 body。

message 的 body 由 0 個或多個 _arguments_ 組成；arguments 是帶型別（typed）的值，例如 integer 或 byte array。

header 與 body 都使用 D-Bus 的 [type system](#type-system "Type System") 與資料序列化格式。

### 訊息格式（Message Format）

一個 message 由 header 與 body 組成。header 是一個具有固定 signature 與固定語意（meaning）的 values 區塊。body 是另一個獨立的 values 區塊，其 signature 由 header 指定。

header 的長度必須是 8 的倍數，這讓在把整個 message 存放在單一 buffer 時，body 可以從 8-byte boundary 開始。若 header 無法自然地在 8-byte boundary 結束，就必須最多加入 7 bytes、以 nul 初始化（nul-initialized）的 alignment padding。

message body 不需要在 8-byte boundary 結束。

message 的最大長度（包含 header、header alignment padding 與 body）為 $2^{27}$，也就是 134217728（128 MiB）。實作不得送出或接受超過此大小的 messages。

header 的 signature 是：

```
					"yyyyuua(yv)"

```

用更容易閱讀的方式寫出來是：

```
					BYTE, BYTE, BYTE, BYTE, UINT32, UINT32, ARRAY of STRUCT of (BYTE,VARIANT)

```

這些值的含意如下：

- 值（Value）：第 1 個 BYTE
	- 說明（Description）：Endianness flag；ASCII 'l' 表示 little-endian，ASCII 'B' 表示 big-endian。header 與 body 都使用此 endianness。
- 值（Value）：第 2 個 BYTE
	- 說明（Description）：Message type。未知的 types 必須被忽略（ignored）。目前已定義的 types 在下文說明。
- 值（Value）：第 3 個 BYTE
	- 說明（Description）：flags 的 bitwise OR。未知的 flags 必須被忽略。目前已定義的 flags 在下文說明。
- 值（Value）：第 4 個 BYTE
	- 說明（Description）：送出端 application 的 major protocol version。若接收端 application 的 major protocol version 不相符，applications 將無法溝通，且 D-Bus connection 必須被中斷（disconnected）。此版本 specification 的 major protocol version 為 1。
- 值（Value）：第 1 個 UINT32
	- 說明（Description）：message body 的長度（bytes），從 header 結束處開始計算。header 會在它為了對齊到 8-boundary 所需的 alignment padding 之後結束。
- 值（Value）：第 2 個 UINT32
	- 說明（Description）：此 message 的 serial；送出端用它當作 cookie 來辨識與此 request 對應的 reply。此值不得為 0。
- 值（Value）：ARRAY of STRUCT of (BYTE,VARIANT)
	- 說明（Description）：0 個或多個 header fields 的 array，其中 BYTE 是 field code，而 VARIANT 是 field value。message type 決定哪些 fields 是必需（required）的。

header 的第 2 個 byte 中可能出現的 _Message types_：

- 傳統名稱（Conventional name）：INVALID
	- 十進位值（Decimal value）：0
	- 說明（Description）：無效的 type。
- 傳統名稱（Conventional name）：METHOD_CALL
	- 十進位值（Decimal value）：1
	- 說明（Description）：Method call。此 message type 可能會觸發回覆（reply）。
- 傳統名稱（Conventional name）：METHOD_RETURN
	- 十進位值（Decimal value）：2
	- 說明（Description）：Method reply，包含回傳資料。
- 傳統名稱（Conventional name）：ERROR
	- 十進位值（Decimal value）：3
	- 說明（Description）：Error reply。若第一個 argument 存在且為 string，則它是錯誤訊息。
- 傳統名稱（Conventional name）：SIGNAL
	- 十進位值（Decimal value）：4
	- 說明（Description）：Signal emission。

header 的第 3 個 byte 中可能出現的 Flags：

- 傳統名稱（Conventional name）：NO_REPLY_EXPECTED
	- 十六進位值（Hex value）：0x1
	- 說明（Description）：此 message 不期待 method return replies 或 error replies，即使它是可能有 reply 的 type；reply 應該被省略。請注意：在本 specification 目前定義的 message types 中，只有 METHOD_CALL 可能期待 reply，因此對於目前文件化的另外三種 message types 而言，此 flag 是否存在並無意義：不論此 flag 是否存在，都不應送出對那些 message types 的 replies。
- 傳統名稱（Conventional name）：NO_AUTO_START
	- 十六進位值（Hex value）：0x2
	- 說明（Description）：bus 不得因應此 message 而為 destination name 啟動（launch）其 owner。
- 傳統名稱（Conventional name）：ALLOW_INTERACTIVE_AUTHORIZATION
	- 十六進位值（Hex value）：0x4
	- 說明（Description）：此 flag 可設在 method call message 上，用於告知接收端：呼叫端（caller）願意等待互動式授權（interactive authorization），而這可能需要相當長的時間才能完成。例如，若設了此 flag，就適合透過 Polkit 或類似 framework 向使用者詢問密碼或確認。此 flag 只在 unprivileged code 呼叫更高權限的 method call 且已部署允許（可能互動式）授權的 authorization framework 時才有用；若沒有部署這樣的 framework，則它沒有任何效果。client implementations 不應預設就設此 flag。若設了此 flag，caller 也應在 method call 上設一個足夠長的 timeout，以確保使用者互動能完成。此 flag 只對 method call messages 有效；其他情況應被忽略（ignored）。作為被呼叫 method 的效果一部分所發生的互動不在此 flag 的範圍內，即使它也可被描述為 authentication 或 authorization。例如，若某個 method call 指示 network management service 嘗試連線到 virtual private network（VPN），此 flag 應控制 network management service 如何做出「此使用者是否允許變更系統網路設定？」的決策，但不應影響 network management service 是否、以及如何與使用者互動以取得存取 VPN 所需的 credentials。若 method call 未設此 flag，而 service 判定：沒有互動式授權則不允許該操作，但在成功的互動式授權後可能允許，則它可以回傳 `org.freedesktop.DBus.Error.InteractiveAuthorizationRequired` error。未設此 flag 並不保證不會使用互動式授權，因為早於此 flag 出現的既有 services 可能已經使用互動式授權。不過，會使用互動式授權的既有 D-Bus APIs 應文件化：該呼叫可能比平常更久；而新的 D-Bus APIs 應避免在缺少此 flag 的情況下使用互動式授權。

#### Header Fields

header 結尾的 array 包含 _header fields_：每個 field 由 1-byte 的 field code 加上一個 field value 組成。header 必須包含該 message type 所需的（required）header fields，並可包含 0 個或多個 optional header fields。此 protocol specification 的未來版本可能新增 fields。實作不得自行發明（invent）header fields；只有對本 specification 的變更才能引入新的 header fields。

若某個實作看到一個它不預期的 header field code，它必須接受並忽略該 field，因為那可能是本 specification 新（但相容）的版本的一部分。此規則也適用於「已知的 header fields 出現在不預期的 messages」的情形，例如：若某個 signal 具有 reply serial，即使以此版本 spec 來看它沒有任何意義，也必須被忽略。

但是，實作不得送出或接受「已知 header field 但 field value 內存的是錯誤型別」的情況。例如，一個 message 的 `INTERFACE` field 其型別若是 `UINT32`，就會被視為損壞（corrupt）。

可能會在彼此互不信任（mutually-distrustful）的 clients 之間轉送（relay）messages 的 server implementations（例如 message bus），應移除 server 不認得的 header fields。不過，client 必須假設 server 沒有這麼做，除非它有相反的證據，例如已檢查 `HeaderFiltering`
[message bus feature](#message-bus-properties-features "Property: org.freedesktop.DBus.Features")。

未來本 specification 可能新增由 message bus 控制的 header fields（類似 `SENDER`）。這類 message fields 通常只應加到會被投遞給「明確要求它們」的 client 的 messages 上（例如透過呼叫某個 method 來請求），而 message bus 應從它轉送的所有其他 messages 移除那些 header fields。此設計原則主要有兩個目的：其一是避免把 messages 投遞給對新 header fields 不感興趣的 clients 時造成不必要的記憶體與吞吐量（throughput）成本；其二是讓 clients 有理由去呼叫那個請求這些 messages 的 method（否則 clients 將無法運作）。這很有用，因為查看該 method call 的 reply 是檢查 message bus 是否保證過濾掉惡意 peer 偽造（faked）header fields 的一種自然方式。

以下是目前已定義的 header fields：

- 傳統名稱（Conventional Name）：INVALID
	- 十進位代碼（Decimal Code）：0
	- 型別（Type）：N/A
	- Required In：不允許
	- 說明（Description）：不是有效的 field name（若出現在 message 中則為錯誤）
- 傳統名稱（Conventional Name）：PATH
	- 十進位代碼（Decimal Code）：1
	- 型別（Type）：OBJECT_PATH
	- Required In：METHOD_CALL、SIGNAL
	- 說明（Description）：要送出呼叫（call）的 object，或 signal 發出（emitted）的來源 object。特殊路徑 `/org/freedesktop/DBus/Local` 為保留；實作不應送出帶有此 path 的 messages，而 bus daemon 的 reference implementation 會中斷任何嘗試這麼做的 application。此 header field 由 message sender 控制。
- 傳統名稱（Conventional Name）：INTERFACE
	- 十進位代碼（Decimal Code）：2
	- 型別（Type）：STRING
	- Required In：SIGNAL
	- 說明（Description）：要在其上呼叫 method call 的 interface，或 signal 發出的來源 interface。對 method calls 而言為 optional；對 signals 而言為 required。特殊 interface `org.freedesktop.DBus.Local` 為保留；實作不應送出帶有此 interface 的 messages，而 bus daemon 的 reference implementation 會中斷任何嘗試這麼做的 application。此 header field 由 message sender 控制。
- 傳統名稱（Conventional Name）：MEMBER
	- 十進位代碼（Decimal Code）：3
	- 型別（Type）：STRING
	- Required In：METHOD_CALL、SIGNAL
	- 說明（Description）：member，也就是 method name 或 signal name。此 header field 由 message sender 控制。
- 傳統名稱（Conventional Name）：ERROR_NAME
	- 十進位代碼（Decimal Code）：4
	- 型別（Type）：STRING
	- Required In：ERROR
	- 說明（Description）：發生之 error 的名稱（for errors）
- 傳統名稱（Conventional Name）：REPLY_SERIAL
	- 十進位代碼（Decimal Code）：5
	- 型別（Type）：UINT32
	- Required In：ERROR、METHOD_RETURN
	- 說明（Description）：此 message 所回覆的 message 的 serial number。（serial number 是 header 中第 2 個 UINT32。）此 header field 由 message sender 控制。
- 傳統名稱（Conventional Name）：DESTINATION
	- 十進位代碼（Decimal Code）：6
	- 型別（Type）：STRING
	- Required In：optional
	- 說明（Description）：此 message 預期要送往的 connection 名稱。此 field 通常只有與 message bus 搭配使用時才有意義（見 “Message Bus Specification” 章節），但其他 servers 也可能定義其自有語意。此 header field 由 message sender 控制。
- 傳統名稱（Conventional Name）：SENDER
	- 十進位代碼（Decimal Code）：7
	- 型別（Type）：STRING
	- Required In：optional
	- 說明（Description）：送出端 connection 的 unique name。此 field 通常只有與 message bus 搭配使用時才有意義，但其他 servers 也可能定義其自有語意。在 message bus 上，此 header field 由 message bus 控制，因此其可靠性與可信度（trustworthy）與 message bus 本身一致。否則，此 header field 由 message sender 控制，除非有 out-of-band 資訊另有指示。
- 傳統名稱（Conventional Name）：SIGNATURE
	- 十進位代碼（Decimal Code）：8
	- 型別（Type）：SIGNATURE
	- Required In：optional
	- 說明（Description）：message body 的 signature。若省略，則假設為空 signature ""（也就是 body 必須是 0-length）。此 header field 由 message sender 控制。
- 傳統名稱（Conventional Name）：UNIX_FDS
	- 十進位代碼（Decimal Code）：9
	- 型別（Type）：UINT32
	- Required In：optional
	- 說明（Description）：隨 message 附帶（accompany）的 Unix file descriptors 的數量。若省略，則假設沒有 Unix file descriptors 隨附。實際的 file descriptors 需要透過 platform-specific 機制 out-of-band 傳輸，且必須在傳輸 message 本體的同時送出；不得在 message 本體的第一個 byte 傳輸之前送出，也不得在 message 本體的最後一個 byte 傳輸之後送出。此 header field 由 message sender 控制。

### 有效名稱（Valid Names）

D-Bus messages 中各式各樣的 names 都有一些限制。

對 bus names、interfaces 與 members，存在一個 _最大名稱長度（maximum name length）_ 255。

#### Interface names

Interfaces 的名稱型別為 `STRING`，也就是必須是有效 UTF-8。不過，interface names 還有一些額外限制：

- Interface names 由 2 個或更多元素（elements）組成，元素之間以句點（'.'）分隔。所有元素都必須至少包含 1 個字元。
- 每個元素只能包含 ASCII 字元 "\[A-Z\]\[a-z\]\[0-9\]\_"，且不得以數字開頭。
- Interface names 不得超過最大名稱長度。

Interface names 應以該 interface 作者的 reversed DNS domain name 作為開頭（小寫），類似 Java 的 interface names。慣例上，interface name 的其餘部分通常由多個單字串接而成，並讓每個單字的首字母大寫（"CamelCase"）。也可以使用多層階層結構（hierarchy）。另外，一個好做法是在名稱中包含該 interface 的 major version，並在做出不相容的變更時遞增它；如此一來，如有需要，一個 object 就能並行實作同一個 interface 的多個版本。

例如，如果 `example.com` 的擁有者正在為一個 music player 開發 D-Bus API，他們可能會定義名為 `com.example.MusicPlayer1`、`com.example.MusicPlayer1.Track` 與 `com.example.MusicPlayer1.Seekable` 的 interfaces。

如果作者的 DNS domain name 含有 hyphen/minus（'-'）字元（D-Bus interface names 不允許），則應以 underscores 取代。若 DNS domain name 在句點（'.'）後緊接著出現數字（interface names 也不允許），則 interface name 應在該數字前加上一個 underscore。例如，若 7-zip.org 的擁有者為 out-of-process plugins 定義一個 interface，名稱可能會是 `org._7_zip.Plugin`。

如果作者的 DNS domain name 是 internationalized domain name（IDN），例如 `δοκιμή.example`，則應以其 ASCII 編碼（也稱 ACE-encoding 或 Punycode，例如 `xn--jxalpdlp.example`）作為 reversed-domain-name 形式的基礎。與其他名稱相同，reversed-domain-name 形式中的 hyphen/minus 應替換為 underscores，例如 `example.xn__jxalpdlp.ExampleService1`。更多關於 internationalized domain names 的資訊，請參考
[RFC 5890 "Internationalized Domain Names for Applications (IDNA): Definitions and Document Framework"](https://datatracker.ietf.org/doc/html/rfc5890)。

D-Bus 不區分 Java 中所謂 classes 與 interfaces 的概念：在 D-Bus 上兩者都可以用 interface name 來識別。

#### Bus names

Connections 會與 1 個或多個 bus names 關聯。一個 connection 恰好有一個 bus name，稱為 _unique connection name_。unique connection name 在 connection 的整個生命週期中保持不變。bus name 的型別為 `STRING`，也就是必須是有效 UTF-8。不過，bus names 還有一些額外限制：

- 以冒號（':'）開頭的 bus names 是 unique connection names。其他 bus names 稱為 _well-known bus names_。
- Bus names 由 1 個或更多元素組成，元素之間以句點（'.'）分隔。所有元素都必須至少包含 1 個字元。
- 每個元素只能包含 ASCII 字元 "\[A-Z\]\[a-z\]\[0-9\]\_-"，其中在新的 bus names 中不鼓勵使用 "-"。只有 unique connection name 的元素才可以以數字開頭；其他 bus names 的元素不得以數字開頭。
- Bus names 必須至少包含一個 '.'（句點）字元（因此至少有兩個元素）。
- Bus names 不得以 '.'（句點）字元開頭。
- Bus names 不得超過最大名稱長度。

請注意：hyphen（'-'）允許用於 bus names，但不允許用於 interface names。它同時也會在多個引用 D-Bus 的規格或 API 中造成問題或不被允許，例如
[Flatpak application IDs](http://docs.flatpak.org/en/latest/introduction.html#identifiers)、
[Desktop Entry Specification 中的 `DBusActivatable` interface](https://specifications.freedesktop.org/desktop-entry-spec/desktop-entry-spec-latest.html#dbus)、
以及「application 的 \"main\" interface 與 object path 應與其 bus name 類似」的慣例。為避免需要特例處理（special-case handling）的情況，建議新的 D-Bus names 一律以 underscores 取代 hyphens。

如同 [interface names](#message-protocol-names-interface "Interface names")，well-known bus names 應以作者的 reversed DNS domain name（小寫）開頭，慣例上其餘部分由多個單字串接，並讓每個單字首字母大寫。與 interface names 類似，在 well-known bus names 中包含 version number 是個好主意；若需要 backwards compatibility，也可以同時使用多個版本的 well-known bus name。

同 [interface names](#message-protocol-names-interface "Interface names")，如果作者的 DNS domain name 含有 hyphen/minus，應替換為 underscores；如果包含前置數字（leading digits），應透過在前面加 underscore 來 escape；internationalized domain names（IDN）需要先以 ASCII 形式（ACE-encoding、Punycode）編碼，再把 dashes 替換成 underscores。例如，若 7-zip.org 的擁有者為一個封存（archiving）application 使用 D-Bus name，可能命名為 `org._7_zip.Archiver`；而 `δοκιμή.example` 的擁有者可能會使用 `example.xn__jxalpdlp.ExampleService1`。

如果一個 well-known bus name 暗示存在一個 "main" interface，該 "main" interface 常常會使用與 well-known bus name 相同的名稱，並位於對應的 object path。例如，如果 `example.com` 的擁有者正在為 music player 開發 D-Bus API，他們可能會定義：任何取得 well-known name `com.example.MusicPlayer1` 的 application，都應在 object path `/com/example/MusicPlayer1` 擁有一個 object，並實作 interface `com.example.MusicPlayer1`。

#### Member names

Member（也就是 method 或 signal）names：

- 只能包含 ASCII 字元 "\[A-Z\]\[a-z\]\[0-9\]\_"，且不得以數字開頭。
- 不得包含 '.'（句點）字元。
- 不得超過最大名稱長度。
- 長度必須至少為 1 byte。

慣例上，D-Bus 的 member names 由首字母大寫的單字組成且不含標點（"camel-case"）。Method names 通常應是動詞，例如 `GetItems`；signal names 通常描述一個事件，例如 `ItemsChanged`。

#### Error names

Error names 與 interface names 有相同限制。

Error names 與 interface names 有相同命名慣例，且常包含 `.Error.`；例如 `example.com` 的擁有者可能會定義 errors `com.example.MusicPlayer1.Error.FileNotFound` 與 `com.example.MusicPlayer1.Error.OutOfMemory`。D-Bus 自己定義的 errors（例如 `org.freedesktop.DBus.Error.Failed`）也遵循類似的模式。

### 訊息類型（Message Types）

每一種 message type（`METHOD_CALL`、`METHOD_RETURN`、`ERROR`、`SIGNAL`）都有其預期的使用慣例（usage conventions）與 header fields。本節描述這些慣例。

#### Method Calls

有些 messages 會在遠端 object 上呼叫一個操作（operation）。這些稱為 method call messages，並帶有 type tag `METHOD_CALL`。這類 messages 在一般程式中自然對應到物件的方法（methods）。

method call message 必須包含一個 `MEMBER` header field，用以指出 method 的名稱。message 也可以選擇性包含 `INTERFACE` field，指出該 method 所屬的 interface。強烈建議在所有 method call messages 中都包含 `INTERFACE`。

若缺少 `INTERFACE` field，而同一個 object 上兩個或更多 interfaces 都有同名 method，則哪一個 method 會被呼叫是不定義（undefined）的。實作可以選擇回傳 error，或把 message 當作屬於其中任意一個 interface 來投遞。

在某些情況（例如 well-known system bus），messages 會先通過一個位於遠端 object 實作之外的 access-control list（ACL）過濾器。若該過濾器會透過比對 interface 來拒絕某些 messages，或只接受特定 interfaces 的 messages，那麼它也必須拒絕沒有 `INTERFACE` 的 messages；否則惡意 applications 可能利用此點繞過（bypass）過濾。

method call messages 也會包含 `PATH` field，指出要在其上呼叫該 method 的 object。若呼叫會通過 message bus，message 也會有一個 `DESTINATION` field，給出要接收此 message 的 connection 名稱。

當 application 處理一個 method call message 時，它必須回傳 reply。reply 透過 `REPLY_SERIAL` header field 來識別，該 field 指出所回覆的 `METHOD_CALL` 的 serial number。reply 有兩種可能 type：`METHOD_RETURN` 或 `ERROR`。

若 reply 的 type 是 `METHOD_RETURN`，則 reply message 的 arguments 是該 method call 的回傳值（return value(s)）或 "out parameters"。若 reply 的 type 是 `ERROR`，則表示丟出了 "exception"，呼叫失敗，且不會提供回傳值。對同一個 method call 送出多個 replies 沒有意義。

即使 method call 沒有任何回傳值，也仍必須回覆一個 `METHOD_RETURN`，讓 caller 知道該 method 已成功被處理。

`METHOD_RETURN` 或 `ERROR` reply message 必須包含 `REPLY_SERIAL` header field。

若 `METHOD_CALL` message 帶有 `NO_REPLY_EXPECTED` flag，則接收 method 的 application 不應送出 reply message（不論 reply 原本會是 `METHOD_RETURN` 或 `ERROR`）。

除非 message 帶有 `NO_AUTO_START` flag，若 destination name 不存在，則在投遞 message 之前會啟動（activated）一個程式來取得（own）destination name。見
[“Message Bus Starting Services (Activation)”](#message-bus-starting-services "Message Bus Starting Services (Activation)")。
message 會被保留（held）直到新程式成功啟動或啟動失敗；若失敗則回傳 error。此 flag 只在 message bus 的情境下才相關；在沒有中介 bus 的 one-to-one 通訊中會被忽略。

##### 將 method calls 對應到 native APIs（Mapping method calls to native APIs）

D-Bus 的 APIs 可能把 method calls 對應到某個特定程式語言（例如 C++）中的 method call，也可能把以某種 IDL 寫成的 method call 對應到一個 D-Bus message。

在這類 APIs 中，method 的 arguments 常被稱為 "in"（表示會在 `METHOD_CALL` 中送出）或 "out"（表示會在 `METHOD_RETURN` 中回傳）。有些 APIs（例如 CORBA）也有 "inout" arguments，既送出也接收，也就是 caller 傳入一個值並且該值會被修改。對應到 D-Bus 時，"inout" argument 等價於先有一個 "in" argument，接著再有一個 "out" argument。你無法在 wire 上以 "by reference" 傳遞，因此 "inout" 純粹是 in-process API 的一種假象。

給定一個 method：它有 0 或 1 個回傳值，後面跟著 0 個或更多 arguments，且每個 argument 可能是 "in"、"out" 或 "inout"。caller 會透過依序附加每個 "in" 或 "inout" argument 來構造 message；"out" arguments 不會出現在 caller 的 message 中。

recipient 會構造 reply：先附加回傳值（若有），再依序附加每個 "out" 或 "inout" argument；"in" arguments 不會出現在 reply message 中。

在支援 exceptions 的語言中，Error replies 通常會對應成 exceptions。

從 native APIs 轉換到 D-Bus 時，把 D-Bus 的命名慣例（"FooBar"）自動映射到 native 慣例（例如 "fooBar" 或 "foo_bar"）或許是個不錯的做法。只要你能說 native API 是專為 D-Bus 而寫，這樣做沒有問題。當撰寫會透過 bus 導出（exported）的 object implementations 時，這最合理。用來呼叫遠端 D-Bus objects 的 object proxies 可能需要能呼叫任何 D-Bus method；因此這種「魔法式」的名稱映射可能造成問題。

本 specification 不要求 native API bindings 具備任何特性；前述內容只是建議性的慣例，用以在各種 bindings 間保持一致性。

#### Signal Emission

與 method calls 不同，signal emissions 沒有 replies。signal emission 就是一個 type 為 `SIGNAL` 的單一 message。它必須有三個 header fields：`PATH` 指出 signal 從哪個 object 發出；以及 `INTERFACE` 與 `MEMBER` 指出 signal 的 fully-qualified name。對 signals 而言 `INTERFACE` header 是 required 的；雖然對 method calls 來說它是 optional。

#### Errors

type 為 `ERROR` 的 messages 最常見是作為 `METHOD_CALL` 的 reply，但也可能作為任何 kind of message 的 reply 回傳。例如 message bus 在沒有足夠記憶體送出 signal 時，會回傳 `ERROR` 以回覆一個 signal emission。

一個 `ERROR` 可以有任何 arguments，但若第一個 argument 是 `STRING`，它必須是 error message。error message 可能會以某種方式被記錄（logged）或顯示給使用者。

#### 本文件的記號（Notation in this document）

本文件使用一種簡單的 pseudo-IDL 來描述特定的 method calls 與 signals。以下是一個 method call 的例子：

```
						org.freedesktop.DBus.StartServiceByName (in STRING name, in UINT32 flags,
																										 out UINT32 resultcode)

```

這表示：`INTERFACE` = org.freedesktop.DBus、`MEMBER` = StartServiceByName、`METHOD_CALL` arguments 是 `STRING` 與 `UINT32`，而 `METHOD_RETURN` argument 是 `UINT32`。請記得 `MEMBER` field 不能包含任何 '.'（句點）字元，因此可知 "IDL" 名稱中的最後一段是 member name。

在 C++ 中可能會看起來像這樣：

```
						unsigned int org::freedesktop::DBus::StartServiceByName (const char  *name,
																																		 unsigned int flags);

```

或同樣有效地，把回傳值做成一個 argument：

```
						void org::freedesktop::DBus::StartServiceByName (const char   *name,
																														 unsigned int  flags,
																														 unsigned int *resultcode);

```

API designer 想讓它長什麼樣子取決於他們自己。你也可以設計出 namespace 不用在 C++ 中出現、使用 STL 或 Qt、使用 varargs，或任何你想要的方式。

Signals 會寫成如下：

```
						org.freedesktop.DBus.NameLost (STRING name)

```

Signals 不會標示 "in" vs. "out"，因為只可能有單一方向。

並不特別鼓勵在實際 API implementations 中使用這種粗糙的 pseudo-IDL；你可能會改用你所用語言的 native 記法，或使用 COM 或 CORBA IDL 等。

### 無效的 Protocol 與 Specification 擴充（Invalid Protocol and Spec Extensions）

基於安全理由，D-Bus protocol 應被嚴格解析（parsed）並驗證（validated），除了已定義的 extension points 之外。任何無效的 protocol 或違反 specification 的行為，都應導致立即丟棄（drop）connection，且不通知對端。例外情況必須謹慎考量，例如：對於某個 widely-deployed implementation 的、已充分理解的 idiosyncrasy，可能有理由開例外。在對端 100% 可信且可確定是友善的情況下，出於效能理由略過某些驗證，在某些情況下也可能合理。

一般而言，本規格中違反 "must" 要求的行為應被視為可能的安全利用（exploit）嘗試；而違反 "should" 建議的行為應被視為合法（雖然在某些情況下可能仍應產生錯誤）。

以下 extension points 是 D-Bus 有意內建的，且不得被視為無效 protocol。這些 extension points 旨在供本 spec 的未來版本使用，並非供第三方使用。目前第三方若要在不破壞互通性的前提下擴充 D-Bus，唯一方式是：在 auth protocol 的一部分引入一種協商新 feature 支援的方法，使用以 EXTENSION_ 為前綴的 commands。尚未有標準方式用來協商 features。

- 在 authentication protocol 中（見
	[“Authentication Protocol”](#auth-protocol "Authentication Protocol")），未知 commands 會導致 ERROR 而不是 disconnect。這讓 protocol 可以在未來擴充。以 EXTENSION_ 開頭的 commands 保留給第三方。
- authentication protocol 支援可插拔（pluggable）的 auth mechanisms。
- address format（見
	[“Server Addresses”](#addresses "Server Addresses")）支援新的 transport 種類。
- 帶有未知 type（不是 `METHOD_CALL`、`METHOD_RETURN`、`ERROR`、`SIGNAL`）的 messages 會被忽略。不過未知 type 的 messages 仍必須像已知 messages 一樣具備良好格式（well-formed）：仍然有正常的 header 與 body。
- 具有未知或不預期 field code 的 header fields 必須被忽略；但它們同樣必須是 well-formed。
- 當然也可以新增新的 standard interfaces（包含新的 methods 與 signals）。

## 驗證協定（Authentication Protocol）

在 message 的傳輸開始之前，兩個 applications 必須先完成驗證（authenticate）。D-Bus 的驗證使用一個簡單的純文字（plain-text）協定；此協定是 SASL 的一個 profile，並且與 SASL 規格相當直接地對應。這裡不使用 message encoding，只使用純文字訊息。

在 D-Bus 中使用 SASL，需要我們定義「非空的 authorization identity 字串」的意義。當 D-Bus 用於 Unix 平台時，非空的 SASL authorization identity 代表一個 Unix 使用者。若 authorization identity 完全由 ASCII 十進位數字組成，則代表 POSIX 所定義的 numeric user ID，例如 root 使用者為 `0`、或許多系統上第一個建立的使用者為 `1000`。非數字的 authorization identities 不要求一定要被接受或支援；但若使用，必須解讀為 POSIX `struct passwd` 的 `pw_name` 欄位中的 login name，例如 `root`，並正規化（normalized）為對應的 numeric user ID。為了最佳互通性（interoperability），client 與 server 應使用 numeric user IDs。

當 D-Bus 用於 Windows 平台時，非空的 SASL authorization identity 代表一個 Windows security identifier（SID）的字串形式，例如 domain 或本機使用者 `S-1-5-21-3623811015-3361044348-30300820-1013`，或 LOCAL_SYSTEM 使用者 `S-1-5-18`。面向使用者的 usernames（例如 `Administrator` 或 `LOCAL_SYSTEM`）不會用在 D-Bus protocol 中。

在範例中，"C:" 與 "S:" 分別表示由 client 與 server 送出的行（lines）。client 會送出第一行，而 server 必須對 client 的每一行以單行回覆（single-line reply）回應；只有一個例外：對 `BEGIN` 命令不會回覆。

### 協定概觀（Protocol Overview）

此協定是以行（line）為單位的協定，每一行都以 \r\n 結尾。每行以全大寫（all-caps）的 ASCII 命令名稱開頭，命令名稱只包含字元範圍 
\[A-Z\_\]，其後是一個空白，接著是該命令的 arguments，最後是結尾的 \r\n。此協定區分大小寫（case-sensitive）。所有 bytes 都必須在 ASCII 字元集內。

由 client 傳給 server 的命令如下：

- AUTH \[mechanism\] \[initial-response\]
- CANCEL
- BEGIN
- DATA <data in hex encoding>
- ERROR \[human-readable error explanation\]
- NEGOTIATE_UNIX_FD

由 server 傳給 client 的命令如下：

- REJECTED <space-separated list of mechanism names>
- OK <GUID in hex>
- DATA <data in hex encoding>
- ERROR \[human-readable error explanation\]
- AGREE_UNIX_FD

對 command set 的非官方擴充（Unofficial extensions）必須以 "EXTENSION\_" 開頭，以避免和未來的官方命令衝突。例如："EXTENSION_COM_MYDOMAIN_DO_STUFF"。

### 特殊的 credentials-passing nul byte（Special credentials-passing nul byte）

在連到 server 之後，client 必須立刻送出一個單一的 nul byte。這個 byte 在某些作業系統上，可能會伴隨 credentials 資訊：這些系統會使用 sendmsg() 搭配 SCM_CREDS 或 SCM_CREDENTIALS，在 UNIX domain sockets 上以 out-of-band 的方式傳遞 credentials。然而，即使在其他種類的 socket 上、或在不需要送出任何 byte 才能傳輸 credentials 的作業系統上，仍然必須送出這個 nul byte。本文件描述的文字協定會在這個單一 nul byte 之後開始。如果 server 從 client 收到的第一個 byte 不是 nul byte，server 可以中斷（disconnect）該 client。

除了初始 byte 之外，在任何其他情境出現 nul byte 都是錯誤；此協定只允許 ASCII。

與 nul byte 一起送出的 credentials，可以搭配 SASL 機制 EXTERNAL 使用。

### AUTH 命令（AUTH command）

`AUTH` 命令由 client 傳給 server。server 會回覆 `DATA`、`OK` 或 `REJECTED`。

若 `AUTH` 命令不帶 arguments，表示請求列出可用的 mechanisms。server 必須以 `REJECTED` 命令回覆其理解（understands）的 mechanisms 清單，或回覆一個 error。

若 `AUTH` 命令指定了某個 mechanism，且 server 支援該 mechanism，server 應開始用 `DATA` 命令與 client 交換 SASL challenge-response data。

若 server 不支援 `AUTH` 命令中給定的 mechanism，server 必須送出 `REJECTED`（列出它支援的 mechanisms）或送出一個 error。

若提供了 \[initial-response\] argument，它是給「沒有初始 challenge（或初始 challenge 為空）」的 mechanisms 使用，就像它是第一個 `DATA` 命令的 argument 一樣。若選擇的 mechanism 有初始 challenge，卻又提供了 \[initial-response\]，則 server 應以送出 `REJECTED` 來拒絕驗證。

若在交換 `DATA` 命令之後驗證成功，必須送出 `OK` 命令給 client。

### CANCEL 命令（CANCEL Command）

`CANCEL` 命令由 client 傳給 server。server 會回覆 `REJECTED`。

在送出 `BEGIN` 命令之前的任何時刻，client 都可以送出 `CANCEL`。server 收到 `CANCEL` 後，必須送出 `REJECTED` 並中止（abort）目前的驗證交換。

### DATA 命令（DATA Command）

`DATA` 命令可能由 client 或 server 任一方送出，其內容是一段 hex-encoded 的資料區塊，其解讀方式取決於目前使用的 SASL mechanism。若由 client 送出，server 會回覆 `DATA`、`OK` 或 `REJECTED`。

有些 SASL mechanisms 支援送出一個 "empty string"；FIXME 我們需要某種方式來做到這件事。

### BEGIN 命令（BEGIN Command）

`BEGIN` 命令由 client 傳給 server。server 不會回覆。

`BEGIN` 命令用來確認 client 已收到來自 server 的 `OK` 命令，並完成它想做的任何 feature negotiation，並宣告 message stream 即將開始。

server 在收到 client 的 `BEGIN` 命令之 \r\n 之後，接收到的第一個 octet 必須是「已完成驗證/加密（authenticated/encrypted）」的 D-Bus messages stream 的第一個 octet。

與其他所有命令不同，server 不會以自己的驗證命令回覆 `BEGIN`。在回覆 `BEGIN` 之前那個命令的 reply 之 \r\n 之後，client 接收到的下一個 octet 必須是「已完成驗證/加密」的 D-Bus messages stream 的第一個 octet。

### REJECTED 命令（REJECTED Command）

`REJECTED` 命令由 server 傳給 client。

`REJECTED` 命令表示目前的驗證交換已失敗，且不再適合繼續交換 `DATA`。client 通常會改嘗試另一個 mechanism，或改用不同的 challenge 回應。

`REJECTED` 命令可選擇性包含一個以空白分隔的可用 auth mechanisms 清單作為 arguments。若 server 曾提供過支援的 mechanisms 清單，那麼每次送出 `REJECTED` 都必須提供相同的清單。client 可以自由忽略第一次之後收到的所有清單。

### OK 命令（OK Command）

`OK` 命令由 server 傳給 client。

`OK` 命令表示 client 已通過驗證。client 現在可以繼續協商 Unix file descriptor passing。要這麼做，client 必須送出 `NEGOTIATE_UNIX_FD` 給 server。

否則，client 必須以送出 `BEGIN`（接著開始它的 messages stream）或直接斷線，來回應 `OK` 命令。在 server 收到 `BEGIN` 命令後，不得再接受此文字協定的其他命令；後續通訊將改為 D-Bus messages 的 stream（可能會依協商而加密），而非此文字協定。

若沒有任何 negotiation，client 在 `OK` 命令之 \r\n 之後接收到的第一個 octet，必須是「已完成驗證/加密」的 D-Bus messages stream 的第一個 octet。若 client 協商了 Unix file descriptor passing，則 client 在 `AGREE_UNIX_FD` 或 `ERROR` reply 之 \r\n 之後接收到的第一個 octet，必須是該 stream 的第一個 octet。

`OK` 命令有一個 argument：server 的 GUID。更多關於 server GUID 的內容見
[“Server Addresses”](#addresses "Server Addresses")。

### ERROR 命令（ERROR Command）

`ERROR` 命令可以由任一方向送出。若由 client 送出，server 會回覆 `REJECTED`。

`ERROR` 表示 client 或 server 其一不認得某命令、或在目前 context 不接受該命令、或無法理解該命令的 arguments。這讓此協定可以被擴充：client 或 server 可以送出只在較新版本協定中才存在或被允許的命令；若收到的是 `ERROR` 而不是適當回應，就可以退回（fall back）改用其他技術。

若送出了 `ERROR`，送出 error 的一方必須繼續運作，就好像引發 `ERROR` 的那個命令從未被接收過一樣。然而，接收 `ERROR` 的一方應嘗試其他方法，而不是重複造成 error 的行為；若沒有其他方法，則至少應改用 canceling/rejecting 驗證。

若未來 D-Bus protocol 發生不相容的變更，實作新 protocol 的 applications 可能會透過送出一個新命令，並從不理解它的 applications 收到 `ERROR`，來檢查對方是否支援新 protocol。因此 auth protocol 的 `ERROR` 機制是一個 escape hatch，讓我們未來可以協商 extensions 或 protocol 變更。

### NEGOTIATE_UNIX_FD 命令（NEGOTIATE_UNIX_FD Command）

`NEGOTIATE_UNIX_FD` 命令由 client 傳給 server。server 會回覆 `AGREE_UNIX_FD` 或 `ERROR`。

`NEGOTIATE_UNIX_FD` 表示 client 支援 Unix file descriptor passing。此命令只能在連線已通過驗證之後送出，也就是 client 已收到 `OK` 之後。此命令也只能在支援 Unix file descriptor passing 的 transports 上使用。

server 收到 `NEGOTIATE_UNIX_FD` 後，必須回覆 `AGREE_UNIX_FD` 或 `ERROR` 之一。若所選 transport 支援 Unix file descriptor passing 且 server 支援此 feature，則應回覆前者。若 transport 不支援、server 不支援，或因安全等理由決定不啟用 file descriptor passing，則應回覆後者。

### AGREE_UNIX_FD 命令（AGREE_UNIX_FD Command）

`AGREE_UNIX_FD` 命令由 server 傳給 client。

`AGREE_UNIX_FD` 表示 server 支援 Unix file descriptor passing。此命令只能在連線已通過驗證之後送出，且必須是 client 已送出 `NEGOTIATE_UNIX_FD` 以啟用 Unix file descriptor passing。此命令也只能在支援 Unix file descriptor passing 的 transports 上使用。

client 收到 `AGREE_UNIX_FD` 後，必須送出 `BEGIN`（接著開始它的 messages stream）或直接斷線。在 server 收到 `BEGIN` 後，不得再接受此文字協定的其他命令；後續通訊將改為 D-Bus messages 的 stream（可能會依協商而加密），而非此文字協定。

### 未來擴充（Future Extensions）

未來有可能擴充驗證與協商協定；為此可以引入新的命令。若 client 或 server 收到未知命令，必須回覆 `ERROR`，且不得視為致命錯誤（fatal）。新命令可以在驗證之前與之後引入，也就是在 `OK` 命令之前或之後都可以。

### 驗證範例（Authentication examples）

**Figure 1. 成功的 EXTERNAL 驗證範例**

```
31303030 是 ASCII 十進位 "1000" 的 hex 表示，
因此此範例中 client 以 Unix uid 1000 進行驗證。

C: AUTH EXTERNAL 31303030
S: OK 1234deadbeef
C: BEGIN

```

**Figure 2. 查詢 mechanisms 後選擇其中一個的範例**

```
C: AUTH
S: REJECTED KERBEROS_V4 SKEY
C: AUTH SKEY 7ab83f32ee
S: DATA 8799cabb2ea93e
C: DATA 8ac876e8f68ee9809bfa876e6f9876g8fa8e76e98f
S: OK 1234deadbeef
C: BEGIN

```

**Figure 3. client 送出未知命令後退回到一般驗證的範例**

```
532d312d352d3138 是 Windows SID "S-1-5-18" 的 hex 表示，
因此此範例中 client 以 Windows SID S-1-5-18 進行驗證。

C: FOOBAR
S: ERROR
C: AUTH EXTERNAL 532d312d352d3138
S: OK 1234deadbeef
C: BEGIN

```

**Figure 4. server 不支援初始驗證 mechanism 的範例**

```
C: AUTH EXTERNAL
S: REJECTED KERBEROS_V4 SKEY
C: AUTH SKEY 7ab83f32ee
S: DATA 8799cabb2ea93e
C: DATA 8ac876e8f68ee9809bfa876e6f9876g8fa8e76e98f
S: OK 1234deadbeef
C: BEGIN

```

**Figure 5. 密碼錯誤等原因失敗後成功重試的範例**

```
C: AUTH EXTERNAL 736d6376
S: REJECTED KERBEROS_V4 SKEY
C: AUTH SKEY 7ab83f32ee
S: DATA 8799cabb2ea93e
C: DATA 8ac876e8f68ee9809bfa876e6f9876g8fa8e76e98f
S: REJECTED
C: AUTH SKEY 7ab83f32ee
S: DATA 8799cabb2ea93e
C: DATA 8ac876e8f68ee9809bfa876e6f9876g8fa8e76e98f
S: OK 1234deadbeef
C: BEGIN

```

**Figure 6. skey 被取消（cancelled）後重新開始的範例**

```
C: AUTH EXTERNAL 32303438
S: REJECTED KERBEROS_V4 SKEY
C: AUTH SKEY 7ab83f32ee
S: DATA 8799cabb2ea93e
C: CANCEL
S: REJECTED
C: AUTH SKEY 7ab83f32ee
S: DATA 8799cabb2ea93e
C: DATA 8ac876e8f68ee9809bfa876e6f9876g8fa8e76e98f
S: OK 1234deadbeef
C: BEGIN

```

**Figure 7. 成功 EXTERNAL 驗證並成功協商 Unix FD passing 的範例**

```
C: AUTH EXTERNAL 31303030
S: OK 1234deadbeef
C: NEGOTIATE_UNIX_FD
S: AGREE_UNIX_FD
C: BEGIN

```

**Figure 8. 成功 EXTERNAL 驗證但 Unix FD passing 協商失敗的範例**

```
C: AUTH EXTERNAL 31303030
S: OK 1234deadbeef
C: NEGOTIATE_UNIX_FD
S: ERROR Not supported on this OS
C: BEGIN

```

### 驗證狀態圖（Authentication state diagrams）

本節以 client 與 server 的狀態機（state machine）方式描述 auth protocol。這可能是實作該協定最穩健（robust）的方式。

#### Client states

為更精確描述狀態機與 authentication mechanisms 之間的互動，本節使用以下記號：MECH(CHALL) 表示 server challenge CHALL 被送入 mechanism MECH，並回傳以下其中之一：

- CONTINUE(RESP)：繼續 auth 對話，並把 RESP 作為對 server 的回應送出。
- OK(RESP)：在把 RESP 送給 server 後，client 端的 auth 對話結束，server 應回傳 "OK"。
- ERROR：CHALL 無效且無法處理。

RESP 與 CHALL 都可能為空。

Client 會先從預設 mechanism 取得初始回應，並送出 `AUTH MECH RESP`；若該 mechanism 沒有提供初始回應，則送出 `AUTH MECH`。若 mechanism 回傳 CONTINUE，client 起始狀態為 _WaitingForData_；若 mechanism 回傳 OK，client 起始狀態為 _WaitingForOK_。

client 應追蹤可用 mechanisms 以及它已嘗試過哪些 mechanisms。此清單用來決定要送出哪個 `AUTH` 命令。當清單耗盡（exhausted）時，client 應放棄並關閉連線。

**_WaitingForData_.**

- Receive `DATA CHALL`
	- MECH(CHALL) returns CONTINUE(RESP) → send `DATA RESP`, goto _WaitingForData_
	- MECH(CHALL) returns OK(RESP) → send `DATA RESP`, goto _WaitingForOK_
	- MECH(CHALL) returns ERROR → send `ERROR [msg]`, goto _WaitingForData_
- Receive `REJECTED [mechs]` → send `AUTH [next mech]`, goto _WaitingForData_ 或 _WaitingForOK_
- Receive `ERROR` → send `CANCEL`, goto _WaitingForReject_
- Receive `OK` → authenticated，擇一：send `NEGOTIATE_UNIX_FD` 並 goto _WaitingForAgreeUnixFD_；或 send `BEGIN` 並結束驗證對話（成功）
- Receive anything else → send `ERROR`, goto _WaitingForData_

**_WaitingForOK_.**

- Receive `OK` → authenticated，擇一：send `NEGOTIATE_UNIX_FD` 並 goto _WaitingForAgreeUnixFD_；或 send `BEGIN` 並結束驗證對話（成功）
- Receive `REJECTED [mechs]` → send `AUTH [next mech]`, goto _WaitingForData_ 或 _WaitingForOK_
- Receive `DATA` → send `CANCEL`, goto _WaitingForReject_
- Receive `ERROR` → send `CANCEL`, goto _WaitingForReject_
- Receive anything else → send `ERROR`, goto _WaitingForOK_

**_WaitingForReject_.**

- Receive `REJECTED [mechs]` → send `AUTH [next mech]`, goto _WaitingForData_ 或 _WaitingForOK_
- Receive anything else → 結束驗證對話並斷線

**_WaitingForAgreeUnixFD_.** 到達此狀態時，client 已通過驗證。

- Receive `AGREE_UNIX_FD` → 啟用 Unix fd passing，send `BEGIN`，結束驗證對話（成功）
- Receive `ERROR` → 停用 Unix fd passing，send `BEGIN`，結束驗證對話（成功）
- Receive anything else → 結束驗證對話並斷線

#### Server states

對 server 而言，MECH(RESP) 表示 client 回應 RESP 被送入 mechanism MECH，並回傳以下其中之一：

- CONTINUE(CHALL)：繼續 auth 對話，並把 CHALL 作為 challenge 送給 client。
- OK：client 已成功通過驗證。
- REJECTED：client 驗證失敗，或 RESP 有錯誤。

server 的初始狀態為 _WaitingForAuth_。若 client 被拒絕（rejected）太多次，server 必須中斷 client 連線。

**_WaitingForAuth_.**

- Receive `AUTH` → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive `AUTH MECH RESP`
	- MECH not valid mechanism → send `REJECTED [mechs]`, goto _WaitingForAuth_
	- MECH(RESP) returns CONTINUE(CHALL) → send `DATA CHALL`, goto _WaitingForData_
	- MECH(RESP) returns OK → send `OK`, goto _WaitingForBegin_
	- MECH(RESP) returns REJECTED → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive `BEGIN` → 結束驗證對話並斷線
- Receive `ERROR` → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive anything else → send `ERROR`, goto _WaitingForAuth_

**_WaitingForData_.**

- Receive `DATA RESP`
	- MECH(RESP) returns CONTINUE(CHALL) → send `DATA CHALL`, goto _WaitingForData_
	- MECH(RESP) returns OK → send `OK`, goto _WaitingForBegin_
	- MECH(RESP) returns REJECTED → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive `BEGIN` → 結束驗證對話並斷線
- Receive `CANCEL` → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive `ERROR` → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive anything else → send `ERROR`, goto _WaitingForData_

**_WaitingForBegin_.**

- Receive `BEGIN` → 結束驗證對話，client 已通過驗證
- Receive `NEGOTIATE_UNIX_FD` → send `AGREE_UNIX_FD` 或 `ERROR`，goto _WaitingForBegin_
- Receive `CANCEL` → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive `ERROR` → send `REJECTED [mechs]`, goto _WaitingForAuth_
- Receive anything else → send `ERROR`, goto _WaitingForBegin_

### 驗證機制（Authentication mechanisms）

本節描述一些實務上常見的 D-Bus implementations 所支援的驗證 mechanisms。D-Bus protocol 也允許任何其他標準 SASL mechanism，儘管 D-Bus 的實作通常不支援。

#### EXTERNAL

EXTERNAL mechanism 定義於
[RFC 4422 "Simple Authentication and Security Layer (SASL)", appendix A "The SASL EXTERNAL Mechanism"](https://tools.ietf.org/html/rfc4422#appendix-A)。在可以 out-of-band 傳輸 credentials 的平台上，這是建議的驗證機制；尤其是在能透過
[unix: transport](#transports-unix-domain-sockets-addresses "Server Address Format") 進行 credentials-passing 的 Unix 平台。

在 Unix 平台上，為了互通性，client 應優先以 ASCII 十進位字串表示 integer Unix user ID 作為 authorization identity，例如 1000。透過此驗證協定進行 hex encoding 後，通常會得到類似 `AUTH EXTERNAL 31303030` 再加上 \r\n 的一行。

在 Windows 平台上，使用 EXTERNAL mechanism 的 clients 應使用 Windows security identifier 的字串形式作為 authorization identity，例如 domain 或本機使用者 `S-1-5-21-3623811015-3361044348-30300820-1013`，或 LOCAL_SYSTEM 使用者 `S-1-5-18`。透過此驗證協定進行 hex encoding 後，通常會得到類似 `AUTH EXTERNAL 532d312d352d3138` 再加上 \r\n 的一行。

#### DBUS_COOKIE_SHA1

DBUS_COOKIE_SHA1 是 D-Bus 特有的 SASL mechanism。其 reference implementation 是 D-Bus 參考實作（reference implementation）的一部分。

此機制旨在建立：client 具備讀取「被驗證之使用者」所擁有的 private file 的能力。若 client 能證明它能存取儲存在該檔案中的 secret cookie，client 就通過驗證。因此 DBUS_COOKIE_SHA1 的安全性依賴於 home directory 的安全性。這是 EXTERNAL 無法使用時，建議採用的驗證機制。

在本描述中，"hex encoding" 必須輸出 a 到 f 的小寫；在 DBUS_COOKIE_SHA1 mechanism 中不得使用 A 到 F。

驗證流程如下：

- client 送出它想以之驗證的 username（hex-encoded）。
- server 送出其 "cookie context" 的名稱（見下文）、一個空白字元、client 必須證明知悉的 secret cookie 的 integer ID、一個空白字元、再加上一個隨機產生的 challenge 字串；上述內容全部解碼後再以單一字串一次性 hex-encoded。
- client 找到 cookie 並產生自己的隨機 challenge 字串。然後 client 把 server 的（解碼後）challenge、":"、自己的 challenge、另一個 ":"，以及 cookie 串接起來；並對這個 composite 字串計算 SHA-1 hash（hex digest）。接著把 client 的 challenge 字串、一個空白字元、以及 SHA-1 hex digest 串接起來，對結果做 hex encoding，並回送給 server。
- server 產生與 client 相同的串接字串並計算其 SHA-1 hash；server 將其與 client 傳來的 hash 比較；若兩者一致，client 即通過驗證。

每個 server 都有一個 "cookie context"，它是一個識別該 server 適用的一組 cookies 的名稱。context 的例子可能是 "org_freedesktop_session_bus"。Context names 必須是有效 ASCII、長度非零，且不得包含以下字元：slash（"/"）、backslash（"\\"）、space（" "）、newline（"\\n"）、carriage return（"\\r"）、tab（"\\t"）、或 period（"."）。有一個預設 context："org_freedesktop_general"，供未指定其他 context 的 servers 使用。

Cookies 會儲存在使用者 home directory 的 `~/.dbus-keyrings/` 目錄下。此目錄不得可被其他使用者讀取或寫入；若可被讀寫，client 與 server 必須忽略它。該目錄包含以 cookie context 命名的 cookie 檔案。

cookie 檔案每一行包含一個 cookie。每行有三個以空白分隔的欄位：

- cookie ID number：必須是非負整數，且同一檔案中不得重複使用。
- cookie 的建立時間：使用 UNIX seconds-since-the-epoch 格式。
- cookie 本身：hex-encoded 的隨機 bytes 區塊。cookie 可以是任何長度，但顯然長度越長安全性越高。

只有 server processes 會修改 cookie 檔案。它們必須依照下列程序：

- 以 cookie 檔案名稱加上 ".lock" 產生 lockfile 名稱。server 應使用 `O_CREAT | O_EXCL` 嘗試建立該檔案；若建立失敗即表示 lock 失敗。server 應在合理時間內重試；之後可選擇刪除既有 lock，以避免使用者需要手動刪除過期（stale）的 lock。
	[\[1\]](#ftn.id-1.6.20.4.9.1.1.1.2)
- 建立 lockfile 後，server 載入 cookie 檔案。接著應刪除過舊的 cookies（timeout 可以相當短），或時間戳記比現在「太久的未來」的 cookies（讓 cookies 不會因為某次把時鐘設得很遠而意外變成永久）。reference implementation 會刪除「超過 5 分鐘在未來」或「超過 7 分鐘在過去」的 cookies。為了互通性，建議其他實作也使用同樣的任意時間設定。
- 若沒有足夠新的 cookies 留下，server 需產生新 cookie。為避免無謂的驗證失敗，接近刪除時間的 cookies 不應再用於新的驗證。例如，避免 client 開始使用一個 age 為 6m59s 的 cookie，而驗證花了 2 秒，導致 cookie age 變成 7m01s（大於 7 分鐘），使 server 在過程中刪除它並造成驗證失敗。reference implementation 會在「最新 cookie 超過 5 分鐘」時產生新 cookie，讓 clients 至少有 2 分鐘完成驗證。為了互通性，建議其他實作也使用同樣的任意時間設定。
- 經過修剪（pruned）且可能新增 cookie 的檔案，必須以原子方式重新儲存（使用 temporary file，再 rename()）。
- 透過刪除 lockfile 來釋放 lock。

client 讀取 cookie 檔案時不必加 lock，因為 server 被要求以原子方式儲存該檔案。

## 伺服器位址（Server Addresses）

Server addresses 由 transport 名稱、接著一個冒號（':'）組成，後面再接上一個可選的、以逗號分隔的 key/value 清單，格式為 key=value。每個 value 都需要 escape。

例如：

```
unix:path=/tmp/dbus-test
```

這表示一個 unix socket，其 path 為 /tmp/dbus-test。

Value escaping 類似 URI escaping，但更簡單。

- optionally-escaped bytes 的集合為：`[-0-9A-Za-z_/\.\*]`。要 escape 時，任何不在 optionally-escaped bytes 集合內的 _byte_（注意：不是 character）都必須被替換成 ASCII percent（`%`）與該 byte 的 hex 值。hex 值必須永遠是兩位數，即使第一位是 0。optionally-escaped bytes 也可以視需要被 escape。
- 要 unescape 時，把 value 中的每個 byte 依序附加；如果某個 byte 是 ASCII percent（`%`），則改附加其後的兩位 hex 值所代表的 byte。若某個 `%` byte 後面沒有兩位 hex digits 是錯誤。若看到「不在 optionally-escaped bytes 集合內」的 byte 以未 escape 的形式出現，也是錯誤。

設計 optionally-escaped bytes 這個集合，是為了保留 address 的可讀性與便利性。

server 可以指定一個 key/value pair：key 為 `guid`，value 為 hex-encoded 的 16-byte 序列。[“UUIDs”](#uuids "UUIDs") 章節描述 `guid` 欄位的格式。若存在，這個 UUID 可用來區分不同的 server address。server 應對它正在 listen 的每個 address 使用不同的 UUID。例如：若某個 message bus daemon 同時提供 UNIX domain socket 與 TCP 連線，但無論 client 以何種方式連上都被同等對待，則這兩個連線在連線建立後（post-connection）是等價的，但它們應有不同 UUID，以區分連線的種類。

address UUID 功能的目的，是讓 client 能避免對同一 server 開啟多個相同的連線：client 可以檢查某 address 是否對應到一個已存在的連線。僅比較兩個 addresses 並不足夠，因為 addresses 可能被不同 servers 回收重用（recycled），而等價的 addresses 若僅以字串比較可能看起來不同（例如，TCP address 中 host 可以用 IP address 或 hostname 表示）。

請注意：出於歷史原因，雖然 API 與文件的其餘部分稱它為 "UUID"，但 address key 仍使用 `guid`。

\[FIXME clarify if attempting to connect to each is a requirement or just a suggestion\] 連線到 server 時，可以用分號（';'）分隔多個 server addresses。library 會先嘗試連到第一個 address；若失敗就嘗試下一個，如此類推。例如：

```
unix:path=/tmp/dbus-test;unix:path=/tmp/dbus-test2
```

有些 addresses 是 _connectable_。connectable address 指的是：包含足夠資訊，讓 client 可以連上它的 address。例如 `tcp:host=127.0.0.1,port=4242` 就是 connectable address。但不保證可以在每個 connectable address 上 listen：例如，不可能在 `unixexec:` address 上 listen。

有些 addresses 是 _listenable_。listenable address 指的是：包含足夠資訊讓 server 可以在其上 listen，並產生一個 connectable address（該 connectable address 可能與原本 address 不同）。許多 listenable addresses 不是 connectable：例如 `tcp:host=127.0.0.1` 是 listenable，但不是 connectable（因為它沒有指定 port number）。

在「不是 connectable」的 address 上 listen，會產生一個「不同於該 listenable address」的 connectable address。例如，在 `tcp:host=127.0.0.1` 上 listen 可能產生 connectable address `tcp:host=127.0.0.1,port=30958`；在 `unix:tmpdir=/tmp` 上 listen 可能產生 connectable address `unix:abstract=/tmp/dbus-U8OSdmf7`；或在 `unix:runtime=yes` 上 listen 可能產生 connectable address `unix:path=/run/user/1234/bus`。

## 傳輸（Transports）

\[FIXME 我們需要針對每個 transport 與其可能的 arguments 做更詳細的規範\]
目前的 transports 包含：unix domain sockets（包含 linux 的 abstract namespace）、launchd、systemd、TCP/IP、被執行的子行程（an executed subprocess），以及一種使用 in-process pipes 的 debug/testing transport。未來可能的 transports 包含：一種透過 X11 protocol tunneling 的 transport。

### Unix Domain Sockets（Unix Domain Sockets）

Unix domain sockets 可以是檔案系統中的路徑（paths）；在 Linux kernel 上也可以是 abstract sockets：它們在語法上類似 paths，但不會出現在檔案系統中。

當 D-Bus library 開啟一個 Unix socket 時，socket address length 不包含完整的 `struct sockaddr_un`，而只包含 pathname 或 abstract string 的長度（以及其他欄位）。

它們是 D-Bus 建議使用的 transport：可以單獨使用，或搭配
[systemd](#transports-systemd "systemd") 或
[launchd](#transports-launchd "launchd") addresses 一起使用。

指定 `path` 或 `abstract` 的 Unix addresses 同時是 listenable 與 connectable。指定 `tmpdir` 或 `dir` 的 Unix addresses 只會是 listenable：對應的 connectable address 會改用 `path` 或 `abstract`。同樣地，指定 `runtime` 的 Unix addresses 也只會是 listenable：其對應的 connectable address 會指定 `path`。

#### 伺服器位址格式（Server Address Format）

Unix domain socket addresses 以 "unix:" 前綴識別，並支援以下 key/value pairs：

- Name: path
	- Values: (path)
	- Description: unix domain socket 的路徑。
- Name: dir
	- Values: (path)
	- Description: server 會在此目錄下建立一個隨機檔名（以 'dbus-' 開頭）的 socket 檔案。此 key 只能用於 server addresses，不能用於 client addresses；產生的 client address 會改用 "path" key。
- Name: tmpdir
	- Values: (path)
	- Description: 與 "dir" 相同，但在支援 abstract sockets 的平台上，server 可以嘗試建立一個 abstract socket，其名稱以此目錄開頭，而不是建立 path-based socket。即使在支援 abstract sockets 的平台上，server 也不要求一定要建立 abstract socket：把 "tmpdir" 當成等同於 "dir" 的實作是有效的，且 D-Bus reference implementation 的近期版本就是如此。關於使用 abstract sockets 的後果，見下方 "abstract" 的說明。與 "dir" 一樣，此 key 只能用於 server addresses，不能用於 client addresses；產生的 client address 會改用 "abstract" 或 "path" key。
- Name: abstract
	- Values: (string)
	- Description: abstract namespace 中的一個唯一字串；其語法常看起來像一個 path，但與檔案系統 namespace 無關。此 key 只在支援 abstract Unix sockets 的平台上支援（目前已知只有 Linux）。實作者應注意：在 Linux 上，abstract sockets 是依 network namespaces 來做 namespace，而不是檔案系統的一部分。這表示 abstract sockets 不受 chroot(2) 或 mount namespaces 等機制影響；若某 sandboxing 實作改變了 sandboxed process 對檔案系統的視圖，但與 host 共用同一個 network namespace，可能導致 sandbox escape。
- Name: runtime
	- Values: yes
	- Description: 若提供此 key，它只能用於 server addresses，不能用於 client addresses。若設定，其值必須為 yes。典型用途是在 address 字串中使用 `unix:runtime=yes;unix:tmpdir=/tmp`，以便在 `XDG_RUNTIME_DIR` 未設定時仍能 fallback。

`path`、`abstract`、`runtime`、`dir`、`tmpdir` 這五個 keys 必須且只能提供其中一個。

### launchd

launchd 是一個開源的 server 管理系統，用於取代 Apple Mac OS X 10.4 與更新版本上的 init、inetd 與 cron。它為每位使用者提供一個共同的 session bus address，並使 OSX 上支援 X11 的 D-Bus launcher 成為 deprecated。

launchd 會配置（allocates）一個 socket，並透過 launchd 環境中的 `DBUS_LAUNCHD_SESSION_BUS_SOCKET` 變數提供其 unix path。所有由 launchd 啟動的 processes（或由 launchd 啟動的 dbus-daemon 所再啟動的 processes）都能透過其環境變數取得它。其他 processes 也可以透過執行：`$ launchctl getenv DBUS_LAUNCHD_SESSION_BUS_SOCKET` 來查詢 launchd socket。這通常由 D-Bus client library 完成，因此不需要手動操作。

launchd 在 Microsoft Windows 上不可用。

launchd addresses 同時是 listenable 與 connectable。

#### 伺服器位址格式（Server Address Format）

launchd addresses 以 "launchd:" 前綴識別，並支援以下 key/value pairs：

| Name | Values                 | Description                                                         |
| ---- | ---------------------- | ------------------------------------------------------------------- |
| env  | (environment variable) | launchd 所建立的 dbus-daemon 之 unix domain socket path。           |

`env` key 是必填（required）。

### systemd

systemd 是一個開源的 server 管理系統，用於取代較新 Linux 系統上的 init 與 inetd。它支援 socket activation。D-Bus 的 systemd transport 用來向 systemd 取得由 socket activation 傳入的 file descriptors，並在目前 process 是由其 socket activation 所啟動時，把它們用作 D-Bus transport。

systemd transport 只接受一個或多個透過 socket activation 傳入的 Unix domain 或 TCP stream sockets。強烈建議使用 Unix domain sockets。

systemd transport 在非 Linux 作業系統上不可用。

systemd transport 不定義任何參數 keys。

systemd addresses 是 listenable，但不是 connectable。其對應的 connectable address 是該 socket 的 `unix` 或 `tcp` address。

### TCP Sockets

tcp transport 提供基於 TCP/IP 的連線，可用於位於相同或不同 hosts 的 clients。

類似遠端 X11，TCP transport 不提供 integrity 或 confidentiality 保護，因此通常只應使用於本機 loopback interface（例如 `tcp:host=127.0.0.1` 或 `tcp:host=localhost`）。尤其是把 well-known system bus 或 well-known session bus 設定為在非 loopback 的 TCP address 上 listen 是不安全的。

在 Windows 與多數 Unix 平台上，TCP stack 無法在 TCP 連線上傳遞 credentials，因此
[EXTERNAL](#auth-mechanisms-external "EXTERNAL") 驗證機制通常無法用於此 transport（雖然 D-Bus reference implementation 能在 Windows 上透過 port number 識別 loopback TCPv4 連線，部分啟用 EXTERNAL）。通常會改用
[DBUS_COOKIE_SHA1](#auth-mechanisms-sha "DBUS_COOKIE_SHA1")。

開發者有時會想把遠端 TCP 當作除錯工具使用。然而，如果在成品中仍保留此功能啟用，結果會非常危險且不安全。與其使用遠端 TCP，開發者應
[透過 Secure Shell 或類似協定中繼連線](https://lists.freedesktop.org/archives/dbus/2018-April/017447.html)。

歷史上，遠端 TCP 有時用於在可信的區域網路內，讓同一位使用者在不同機器的 login sessions 共享單一 session bus（搭配未加密的遠端 X11、以 NFS 共享的 home directory 與 NIS（YP）驗證）。這對同一 LAN 上的攻擊者而言並不安全，且應被視為強烈 deprecated；更精確地說，它在相同層面與相同理由上不安全，就像未加密的遠端 X11 與 NFSv2/NFSv3 一樣。D-Bus 維護者建議每個（user, machine）配對使用一個獨立的 session bus，且只允許從該 machine 內部存取。

所有 `tcp` addresses 都是 listenable。同時指定 `host` 與 `port`，且 `port` 非零的 `tcp` addresses 也是 connectable。

#### 伺服器位址格式（Server Address Format）

TCP/IP socket addresses 以 "tcp:" 前綴識別，並支援以下 key/value pairs：

- Name: host
	- Values: (string)
	- Description: DNS name 或 IP address
- Name: bind
	- Values: (string)
	- Description: 用於 listenable address，以設定 server 將在哪個介面上 listen：可以是本機某個介面的 IP address（最常見是 127.0.0.1），或可解析到其中一個 IP 的 DNS name，或使用 '\*' 表示同時在所有介面上 listen。若未指定，預設值與 "host" 相同。
- Name: port
	- Values: (number)
	- Description: server 會開啟的 tcp port。若值為 0，讓 server 從底層作業系統選擇一個可用的 free port。libdbus 能從 server 取回實際使用的 port。
- Name: family
	- Values: (string)
	- Description: 若設定，指定 socket family 類型為 "ipv4" 或 "ipv6"。若未設定，family 不指定。

### Nonce-authenticated TCP Sockets

nonce-tcp transport 提供一種修改過的 TCP transport，使用簡單的驗證機制，以確保只有對檔案系統中某位置具有讀取權限的 clients 才能連到 server。server 會把一個秘密值（nonce）寫入檔案；只有當新連線的 client 在 connect 之後立刻送出該 nonce，連線才會被接受。nonce 機制不需要額外設定，並且與 Authentication 章節中描述的較高層驗證機制互相獨立（orthogonal）。

nonce-tcp transport 在概念上類似：
[DBUS_COOKIE_SHA1](#auth-mechanisms-sha "DBUS_COOKIE_SHA1") 驗證機制與
[tcp](#transports-tcp-sockets "TCP Sockets") transport 的組合，並且看起來最初是因為誤解 SASL 驗證機制而被實作出來的。

和一般 tcp transport 一樣，nonce-tcp transport 沒有 integrity 或 confidentiality 保護，因此通常只應使用於本機 loopback interface（例如 `tcp:host=127.0.0.1` 或 `tcp:host=localhost`）。其他用途是不安全的。關於這些 transports 過去被使用的情境，以及替代方案，見
[“TCP Sockets”](#transports-tcp-sockets "TCP Sockets")。

啟動時，server 會產生一個隨機的 16-byte nonce，並把它寫到使用者暫存目錄中的一個檔案。nonce 檔案位置會透過 server 的 D-Bus address 以 "noncefile" key/value pair 公告。accept 之後，server 會從 socket 讀取 16 bytes；若讀到的 bytes 不匹配 nonce 檔案中的 nonce，server 必須（MUST）立刻丟棄（drop）連線。若 nonce 相符，client 被接受，transport 之後會像一般 tcp transport 一樣運作。

client 成功 connect 到 server socket 後，必須（MUST）從 server 透過 `noncefile=` key/value pair 所公布的檔案中讀取 nonce，並透過 socket 送出。之後 transport 會像一般 tcp transport 一樣運作。

所有 nonce-tcp addresses 都是 listenable。同時指定 `host`、`port` 與 `noncefile`，且 `port` 非零的 nonce-tcp addresses 也是 connectable。

#### 伺服器位址格式（Server Address Format）

Nonce TCP/IP socket addresses 使用 "nonce-tcp:" 前綴識別，並支援以下 key/value pairs：

- Name: host
	- Values: (string)
	- Description: DNS name 或 IP address
- Name: bind
	- Values: (string)
	- Description: 與 tcp: addresses 相同
- Name: port
	- Values: (number)
	- Description: server 會開啟的 tcp port。若值為 0，讓 server 從底層作業系統選擇一個可用的 free port。libdbus 能從 server 取回實際使用的 port。
- Name: family
	- Values: (string)
	- Description: 若設定，指定 socket family 類型為 "ipv4" 或 "ipv6"。若未設定，family 不指定。
- Name: noncefile
	- Values: (path)
	- Description: 包含秘密值（nonce）的檔案位置。這只有在 connectable addresses 上才有意義：提供此 transport 的 listening D-Bus server 會永遠建立一個新的 nonce 檔案。

### Unix 上的 Executed Subprocesses（Executed Subprocesses on Unix）

此 transport 會 fork 一個 process，並以匿名（anonymous）Unix domain socket 連接其標準輸入（stdin）與標準輸出（stdout）。接著 transport 會使用該 socket 進行通訊。這個 transport 可用於利用 out-of-process forwarder 程式作為 D-Bus protocol 的基礎。

被 fork 的 process 會繼承 parent process 的標準錯誤輸出（stderr）與 process group。

Executed subprocesses 在 Windows 上不可用。

`unixexec` addresses 是 connectable，但不是 listenable。

#### 伺服器位址格式（Server Address Format）

Executed subprocess addresses 以 "unixexec:" 前綴識別，並支援以下 key/value pairs：

- Name: path
	- Values: (path)
	- Description: 要執行的 binary 路徑，可以是絕對路徑，或是會在 OS 的預設搜尋路徑中尋找的 binary 名稱。這對應到 execlp() 的第一個 argument。此 key 是必填。
- Name: argv0
	- Values: (string)
	- Description: 執行 binary 時要使用的 program name。若省略，會使用 path= 所指定的相同值。這對應到 execlp() 的第二個 argument。
- Name: argv1, argv2, ...
	- Values: (string)
	- Description: 傳給 binary 的 arguments。這對應到 execlp() 的第三個與後續 arguments。若未指定某個 argvX，則不會再考慮任何 Y > X 的 argvY。

## Meta Transports

Meta transports 是一種具備特殊增強（enhancements）或行為（behavior）的 transport。
目前可用的 meta transports 包含：autolaunch

### Autolaunch

autolaunch transport 提供一種方式，讓 dbus clients 可以自動偵測是否有正在運行的 dbus session bus；若不存在則自動啟動（autolaunch）一個 session bus。

在 Unix 上，`autolaunch` addresses 是 connectable，但不是 listenable。

在 Windows 上，`autolaunch` addresses 同時是 connectable 與 listenable。

#### 伺服器位址格式（Server Address Format）

Autolaunch addresses 使用 "autolaunch:" 前綴識別，並支援以下 key/value pairs：

- Name: scope
	- Values: (string)
	- Description: autolaunch 的 scope（僅 Windows）。"*install-path" - 將 session bus 限制在 dbus 安裝路徑內。dbus 安裝路徑由 shared dbus library 的位置決定：若 library 位於 'bin' 子目錄，安裝根目錄（installation root）為上一層目錄；否則以 library 所在目錄作為 installation root。 urltomarkdowncodeblockplaceholder320.3658448724831196
		"*user" - 將 session bus 限制於最近使用者（recent user）。其他值 - 指定專用（dedicated）的 session bus，例如 "release"、"debug" 或其他。

#### Windows implementation

啟動時，server 會開啟一個 platform-specific transport，建立一個 mutex，以及一段包含相關 session bus address 的 shared memory section。dbus client library 會檢查此 mutex，以偵測是否有正在運行的 dbus session bus。對 mutex 與 shared memory section 的存取會由全域鎖（global locks）保護。

在目前（recent）的實作中，autolaunch transport 使用 localhost 上的 tcp transport，port 由作業系統選擇。此細節未來可能改變。

Disclaimer：目前的實作仍屬早期階段，可能無法在所有情況下運作，且/或可能有安全問題。因此該實作尚未被文件化（documentated）。

## UUIDs

一個可用的 D-Bus implementation 會在兩個地方使用 universally-unique IDs。第一，每個 server address 都有一個用來識別該 address 的 UUID，如同
[“Server Addresses”](#addresses "Server Addresses") 所述。第二，每個執行 D-Bus client 或 server 的作業系統 kernel instance 都有一個用來識別該 kernel 的 UUID；可透過呼叫 method `org.freedesktop.DBus.Peer.GetMachineId()` 取得（見
[“`org.freedesktop.DBus.Peer`”](#standard-interfaces-peer "org.freedesktop.DBus.Peer")）。

本文件中的 "UUID" 一詞應被以字面意義理解：也就是一個 universally unique 的識別碼。它並非意指 RFC4122，事實上 D-Bus UUID 與該 RFC 不相容。

UUID 必須包含 128 bits 的資料並以 hex encoding 表示。hex-encoded 字串不得包含 hyphens 或其他非 hex-digit 字元，且長度必須剛好為 32 個字元。要產生 UUID，目前的 reference implementation 會串接 96 bits 的隨機資料，再加上 UNIX epoch 起算的秒數（以 big endian byte order 表示）的 32-bit time。

只要 random number generator 品質足夠好，單純產生 128 bits 的隨機資料也是可接受、而且可能更好的做法。若隨機 bits 的隨機性不佳，timestamp 在理論上可能有所幫助。若 random number generator 品質夠好，即使只有 96 bits，碰撞（collisions）在實務上也極不可能，因此這個討論多少有點學術性。

不過，實作仍應在 UUID 的前 96 bits 使用隨機資料。

## 標準介面（Standard Interfaces）

本節所用的記號見
[“Notation in this document”](#message-protocol-types-notation "Notation in this document")。
這裡定義了一些可能跨各種 D-Bus applications 都有用的 standard interfaces。

### `org.freedesktop.DBus.Peer`

`org.freedesktop.DBus.Peer` 介面有兩個 methods：

```
		  org.freedesktop.DBus.Peer.Ping ()
		  org.freedesktop.DBus.Peer.GetMachineId (out STRING machine_uuid)

```

收到 `METHOD_CALL` 訊息 `org.freedesktop.DBus.Peer.Ping` 時，application 不需要做任何事，只要照常回覆 `METHOD_RETURN` 即可。ping 被送到哪個 object path 並不重要。reference implementation 會自動處理此 method。

收到 `METHOD_CALL` 訊息 `org.freedesktop.DBus.Peer.GetMachineId` 時，application 應回覆一個 `METHOD_RETURN`，其中包含一個 hex-encoded UUID，用來表示該 process 所在機器的身份。此 UUID 在同一系統上的所有 processes 之間必須相同，至少要維持到該系統下一次 reboot 為止。若可行，它應跨 reboots 也保持相同，但並不總是能實作且不保證。GetMachineId 被送到哪個 object path 並不重要。reference implementation 會自動處理此 method。

在 Unix 上，實作應嘗試從 `/var/lib/dbus/machine-id` 與 `/etc/machine-id` 讀取 machine ID。後者
[由 systemd 定義](https://www.freedesktop.org/software/systemd/man/machine-id.html)，但不使用 systemd 的系統也可能提供等價檔案。若兩者都存在，預期內容相同；若不同，本規格不定義何者優先（reference implementation 偏好 `/var/lib/dbus/machine-id`，但 sd-bus 不偏好）。

在 Windows 上，machine ID 使用 hardware profile GUID（移除標點符號）。可透過
[`GetCurrentHwProfile`](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-getcurrenthwprofilea)
函式取得。

此 UUID 的意圖是「每個作業系統實例（per-instance-of-the-operating-system）」一個，因此它可能代表在 hypervisor 上運行的虛擬機，而非實體機器。基本上，如果兩個 processes 看到相同 UUID，它們也應看到相同的 shared memory、UNIX domain sockets、process IDs，以及其他需要共同運行 OS kernel 才能共享的特性。

此 UUID 經常用在其他程式可能會使用 hostname 的場合。但 hostname 可以在不 reboot 的情況下改變，或只是 "localhost"，因此 UUID 更穩健。

[“UUIDs”](#uuids "UUIDs") 章節說明 UUID 的格式。

### `org.freedesktop.DBus.Introspectable`

此介面有一個 method：

```
		  org.freedesktop.DBus.Introspectable.Introspect (out STRING xml_data)

```

object instances 可以實作 `Introspect`，它回傳該 object 的 XML 描述：包含其 interfaces（含 signals 與 methods）、在 object path tree 中位於其下方的 objects，以及其 properties。

XML 字串的格式見
[“Introspection Data Format”](#introspection-format "Introspection Data Format")。

### `org.freedesktop.DBus.Properties`

許多 native APIs 會有 object _properties_ 或 _attributes_ 的概念。這些可透過 `org.freedesktop.DBus.Properties` 介面導出。

```
			  org.freedesktop.DBus.Properties.Get (in STRING interface_name,
												   in STRING property_name,
												   out VARIANT value);
			  org.freedesktop.DBus.Properties.Set (in STRING interface_name,
												   in STRING property_name,
												   in VARIANT value);
			  org.freedesktop.DBus.Properties.GetAll (in STRING interface_name,
													  out ARRAY of DICT_ENTRY<STRING,VARIANT> props);

```

慣例上，D-Bus properties 的名稱由首字母大寫的單字組成且不含標點（"CamelCase"），如同
[member names](#message-protocol-names-member "Member names")。
例如，GObject property `connection-status` 或 Qt property `connectionStatus`，可在 D-Bus 上表示為 `ConnectionStatus`。

嚴格來說，D-Bus property names 不要求一定要遵循與 member names 相同的命名限制；但不會是有效 member names 的 D-Bus property names（尤其是 GObject 風格的以 dash 分隔之 property names）可能造成互通性問題，應避免。

可透過呼叫 `org.freedesktop.DBus.Introspectable.Introspect` 來得知有哪些 properties 以及它們是否可寫；見
[“`org.freedesktop.DBus.Introspectable`”](#standard-interfaces-introspectable "org.freedesktop.DBus.Introspectable")。

`interface_name` 可提供空字串；在此情況下，若同一 object 上有多個 properties 具有相同名稱，結果是不定義的（依某個任意但可重現的規則挑一個，或回傳 error，都是合理的可能）。

若以一個有效且不含任何 properties 的 interface name 呼叫 `org.freedesktop.DBus.Properties.GetAll`，應回傳空陣列。若以一個有效 interface name 呼叫，但其中某些 properties 對 caller 不可存取（例如 service 針對每個 property 實作了存取控制），那些 properties 應被靜默省略（silently omitted）於結果陣列之外。若對任何這類 properties 呼叫 `org.freedesktop.DBus.Properties.Get`，應回傳適當的存取控制 error。

若一個 object 上的一個或多個 properties 發生變更，可以送出（may be emitted）`org.freedesktop.DBus.Properties.PropertiesChanged` signal（此 signal 在 0.14 新增）：

```
			  org.freedesktop.DBus.Properties.PropertiesChanged (STRING interface_name,
																 ARRAY of DICT_ENTRY<STRING,VARIANT> changed_properties,
																 ARRAY<STRING> invalidated_properties);

```

其中 `changed_properties` 是一個 dictionary，包含已變更的 properties 及其新值；`invalidated_properties` 是一個陣列，包含已變更但值未被攜帶（not conveyed）的 properties。

是否支援 `PropertiesChanged` signal，可透過呼叫 `org.freedesktop.DBus.Introspectable.Introspect` 得知。請注意：signal 可能對某 object 有支援，但在每個 property 上「是否支援以及如何使用」可能不同（例如出於效能或安全理由）。每個 property（或其父 interface）必須以 `org.freedesktop.DBus.Property.EmitsChangedSignal` annotation 表達此點（通常預設值 `true` 已足夠，表示不需要特別使用該 annotation）。關於此 annotation 的細節見
[“Introspection Data Format”](#introspection-format "Introspection Data Format")。

### `org.freedesktop.DBus.ObjectManager`

API 可選擇性地對一個或多個 object 子樹（sub-trees）使用此介面。每個子樹的 root 會實作此介面，讓其他 applications 能在一次 method call 中取得樹下所有 objects、interfaces 與 properties。若預期使用者會對該樹中所有 objects 的所有 interfaces 都感興趣，使用此介面是合適的；若預期使用者只會對少量 objects、少量 interfaces，或兩者都只感興趣，則應使用更細粒度（granular）的 API。

applications 用來取得所有 objects 與 properties 的 method 是 `GetManagedObjects`：

```
		  org.freedesktop.DBus.ObjectManager.GetManagedObjects (out ARRAY of DICT_ENTRY<OBJPATH,ARRAY of DICT_ENTRY<STRING,ARRAY of DICT_ENTRY<STRING,VARIANT>>> objpath_interfaces_and_properties);

```

此 method 的回傳值是一個 dict，其 keys 是 object paths。所有回傳的 object paths 都是實作此介面的 object path 之子節點（children），也就是它們的 object paths 會以 ObjectManager 的 object path 加上 '/' 作為開頭。

每個 value 是一個 dict，其 keys 是 interface names。該內層 dict 的每個 value 都等同於在該 object path 與 interface 組合上呼叫
[org.freedesktop.DBus.Properties.GetAll()](#standard-interfaces-properties "org.freedesktop.DBus.Properties")
所會回傳的 dict。若某 interface 沒有 properties，則回傳空 dict。

變更會透過以下兩個 signals 發出：

```
		  org.freedesktop.DBus.ObjectManager.InterfacesAdded (OBJPATH object_path,
															  ARRAY of DICT_ENTRY<STRING,ARRAY of DICT_ENTRY<STRING,VARIANT>> interfaces_and_properties);
		  org.freedesktop.DBus.ObjectManager.InterfacesRemoved (OBJPATH object_path,
																ARRAY<STRING> interfaces);

```

當新增了新 object，或既有 object 新增了一個或多個 interfaces 時，會送出 `InterfacesAdded` signal。當移除 object，或 object 失去一個或多個 interfaces 時，會送出 `InterfacesRemoved` signal。`InterfacesAdded` 的第二個參數包含一個 dict，列出被加到該 object path 的 interfaces 與（若有）properties。`InterfacesRemoved` 的第二個參數包含一個陣列，列出被移除的 interfaces。請注意：既有 interfaces 上的 properties 變更不會透過此介面回報；application 應同時監看每個 object 上既有的
[PropertiesChanged](#standard-interfaces-properties "org.freedesktop.DBus.Properties")
signal。

Applications 不應（SHOULD NOT）導出那些「位於實作此介面的 object 之下（直接或間接）」但沒有出現在該介面 `GetManagedObjects()` 回覆中的 objects。

`ObjectManager` 介面的目的，是讓撰寫健壯（robust）的 client implementation 更容易。最簡單的 client implementation 只需要兩個 method calls：

```
		  org.freedesktop.DBus.AddMatch (bus_proxy,
										 "type='signal',sender='org.example.App2',path_namespace='/org/example/App2'");
		  objects = org.freedesktop.DBus.ObjectManager.GetManagedObjects (app_proxy);

```

分別對 message bus 與遠端 application 的 `ObjectManager` 呼叫。每當建立一個新的遠端 object（或既有 object 新增一個新的 interface），就會送出 `InterfacesAdded` signal；由於此 signal 包含該 interfaces 的所有 properties，因此不需要再對遠端 object 呼叫 `org.freedesktop.Properties` 介面。此外，由於初始 `AddMatch()` 規則已包含來自新建立 child object 的 signal messages，因此不需要新增 `AddMatch()` 呼叫。

_`org.freedesktop.DBus.ObjectManager` 介面是在 D-Bus specification 0.17 新增。_

## 內省資料格式（Introspection Data Format）

如同
[“`org.freedesktop.DBus.Introspectable`”](#standard-interfaces-introspectable "org.freedesktop.DBus.Introspectable") 所述，objects 可以在 runtime 被 introspect，回傳一個描述 object 的 XML 字串。同樣的 XML 格式也可用於其他情境，例如作為用來產生靜態語言 bindings 的 "IDL"。

以下是一個 introspection data 的範例：

```
				<!DOCTYPE node PUBLIC "-//freedesktop//DTD D-BUS Object Introspection 1.0//EN"
				 "http://www.freedesktop.org/standards/dbus/1.0/introspect.dtd">
				<node name="/com/example/sample_object0">
					<interface name="com.example.SampleInterface0">
						<method name="Frobate">
							<arg name="foo" type="i" direction="in"/>
							<arg name="bar" type="s" direction="out"/>
							<arg name="baz" type="a{us}" direction="out"/>
							<annotation name="org.freedesktop.DBus.Deprecated" value="true"/>
						</method>
						<method name="Bazify">
							<arg name="bar" type="(iiu)" direction="in"/>
							<arg name="bar" type="v" direction="out"/>
						</method>
						<method name="Mogrify">
							<arg name="bar" type="(iiav)" direction="in"/>
						</method>
						<signal name="Changed">
							<arg name="new_value" type="b"/>
						</signal>
						<property name="Bar" type="y" access="readwrite"/>
					</interface>
					<node name="child_of_sample_object"/>
					<node name="another_child_of_sample_object"/>
			 </node>

```

這裡需要撰寫更正式的 DTD 與規格，但以下先提供一些快速備註：

- 只有 root `<node>` element 可以省略 node name，因為可知它就是被 introspect 的 object。若 root `<node>` 有 name attribute，它必須是絕對 object path。若 child `<node>` 有 object paths，它們必須是相對的。
- 若 child `<node>` 有任何子元素（sub-elements），它們就必須代表對該 child 的完整 introspection。若 child `<node>` 是空的，則它可能有或沒有子元素；必須再 introspect 該 child 才知道。其意圖是：若一個 object 知道其 children 很快就能被 introspect，它可以直接回傳 children 的資訊；否則可以省略。
- `<arg>` 的 direction element 可以省略；省略時，method calls 預設為 "in"，signals 預設為 "out"。Signals 只允許 "out"，因此即使可以指定 direction，也沒有意義。
- 可用的 directions 為 "in" 與 "out"；不像 CORBA，沒有 "inout"。
- 可用的 property access flags 為 "readwrite"、"read"、"write"。
- 一個 `<node>` 當然可以列出多個 interfaces。
- arguments 的 "name" attribute 是可選的。

method、interface、property、signal、argument elements 可以帶有 "annotations"：它們是通用的 metadata key/value pairs。在概念上類似 Java annotations 與 C# attributes。常見（well-known）的 annotations：

- Name: org.freedesktop.DBus.Deprecated
	- Values (separated by ,): true,false
	- Description: 該實體是否 deprecated；預設為 false。
- Name: org.freedesktop.DBus.GLib.CSymbol
	- Values (separated by ,): (string)
	- Description: C symbol；可用於 methods 與 interfaces。
- Name: org.freedesktop.DBus.Method.NoReply
	- Values (separated by ,): true,false
	- Description: 若設定，不要期待 method call 的 reply；預設為 false。
- Name: org.freedesktop.DBus.Property.EmitsChangedSignal
	- Values (separated by ,): true,invalidates,const,false
	- Description: 若設為 false，property 變更時不保證會送出 `org.freedesktop.DBus.Properties.PropertiesChanged` signal（見 “org.freedesktop.DBus.Properties”）。若設為 const，該 property 在其所屬 object 的生命週期內永不變更，因此永遠不會對它送出 signal。若設為 invalidates，會送出 signal 但不包含值。若設為 true，會送出 signal 並包含值。此 annotation 的值：若 enclosing interface element 沒有指定此 annotation，預設為 true；否則預設為 enclosing interface element 所指定的值。此 annotation 旨在供 code generators 使用，以實作 client-side 對 property values 的快取（caching）。對於所有 annotation 值為 const、invalidates 或 true 的 properties，client 可以無條件快取這些值，因為 properties 不會變更，或若變更就會產生通知。

## 訊息匯流排規格（Message Bus Specification）

### 訊息匯流排概觀（Message Bus Overview）

message bus 會接受一個或多個 applications 的連線。一旦連上，applications 就能與同樣連到 bus 的其他 applications 交換 messages。

為了在各連線之間路由（route）messages，message bus 會維護從 names 到 connections 的對應（mapping）。每個 connection 都會自動被指派一個在「此 bus 的生命週期內唯一」（unique-for-the-lifetime-of-the-bus）的 name。applications 可以為 connection 請求額外 names。額外 names 通常是 "well-known names"，例如 "com.example.TextEditor1"。當一個 name 被綁定（bound）到某 connection，便稱該 connection _擁有（own）_ 該 name。

bus 本身擁有一個特殊 name：`org.freedesktop.DBus`，並在 `/org/freedesktop/DBus` 有一個 object 實作 `org.freedesktop.DBus` 介面。此服務允許 applications 對 bus 本身提出管理性的請求（administrative requests）。例如，applications 可以請 bus 將某個 name 指派給某個 connection。

每個 name 可能有 _queued owners_。當 application 為某 connection 請求一個 name，而該 name 已在使用中時，bus 可以選擇性地把該 connection 加入等待該 name 的佇列（queue）。若該 name 的目前 owner 斷線或釋放 name，佇列中的下一個 connection 會成為新的 owner。

例如你啟動兩個 text editors 時，此機制能讓事情合理運作：第一個可能請求 "com.example.TextEditor1"，第二個則會在該 name 的可能 owner 佇列中排隊；當第一個退出，第二個會接手。

applications 可以送出 _unicast messages_（送給特定 recipient 或 bus 本身），或 _broadcast messages_（送給所有感興趣的 recipients）。詳見
[“Message Bus Message Routing”](#message-bus-routing "Message Bus Message Routing")。

### 訊息匯流排名稱（Message Bus Names）

每個 connection 至少有一個 name：在連線建立時指派，並在呼叫 `org.freedesktop.DBus.Hello` method call 的回應中回傳。這個自動指派的 name 稱為 connection 的 _unique name_。unique names 在同一個 bus 上永不會被重用給兩個不同 connections。

擁有 unique name 是與 message bus 互動的先決條件（prerequisite）。因此在邏輯上，unique name 會永遠是 application 取得的第一個 name，也是它失去擁有權（ownership）的最後一個 name。

unique connection names 必須以 ':'（ASCII colon）開頭；不是 unique names 的 bus names 不得以 ':' 開頭。（bus 必須拒絕 application 手動請求任何以 ':' 開頭的 name。）此限制可以徹底防止 "spoofing"：送往 unique name 的 messages 永遠會到達預期的 connection。

當 connection 被關閉時，它所擁有的所有 names 都會被刪除（或若佇列中有等待者，則轉移給佇列中的下一個 connection）。

connection 可以透過 `org.freedesktop.DBus.RequestName` 訊息請求與其關聯的額外 names。
[“Bus names”](#message-protocol-names-bus "Bus names") 描述有效 name 的格式。這些 names 之後也可透過 `org.freedesktop.DBus.ReleaseName` 訊息釋放。

### 訊息匯流排訊息路由（Message Bus Message Routing）

messages 可以有一個 `DESTINATION` 欄位（見
[“Header Fields”](#message-protocol-header-fields "Header Fields")），使其成為 _unicast message_。若 `DESTINATION` 欄位存在，它會以 name 指定 message recipient。method calls 與 replies 通常會指定此欄位。message bus 必須把任何 type 的 message（只要 `DESTINATION` 欄位被設定）送到指定 recipient，不論 recipient 是否設置了能匹配該 message 的 match rule。

message bus 收到 signal 時，若缺少 `DESTINATION` 欄位，則它被視為 _broadcast signal_，並會送到所有具有 _message matching rules_ 且能匹配此 message 的 applications。大多數 signal messages 都是 broadcasts，而本規格目前定義的其他 message types 都不得被 broadcast。

unicast signal messages（具有 `DESTINATION` 欄位者）並不常用，但它們會像其他 unicast messages 一樣處理：不論 match rules，仍會投遞到指定 recipient。unicast signals 的一個用途，是避免某種競態條件：signal 在預期 recipient 來得及呼叫
[AddMatch](#bus-messages-add-match "Method: org.freedesktop.DBus.AddMatch")
以接收該 signal 之前就被送出；若 signal 直接以 unicast 送給該 recipient，它甚至不需要新增 match rule，因此不會有競態條件。另一個用途是在安全政策阻止竊聽（eavesdropping）的 message bus 上，送出只應被單一 recipient 看見的敏感資訊。

message bus 收到 method call 時，若缺少 `DESTINATION` 欄位，則該呼叫被視為標準的一對一訊息，並由 message bus 本身解讀。例如，送出不帶 `DESTINATION` 的 `org.freedesktop.DBus.Peer.Ping`，會使 message bus 自己立刻回覆 ping；bus 不會讓其他 applications 看見此 message。

延續 `org.freedesktop.DBus.Peer.Ping` 的例子，如果 ping message 帶有 `DESTINATION` = `com.yoyodyne.Screensaver`，那麼 ping 會被轉送，而 Yoyodyne Corporation 的 screensaver application 便被期待回覆該 ping。

message bus implementations 可能會施行安全政策，阻止特定 messages 被送出或接收。當某 method call message 因安全政策而無法送出或接收時，message bus 應送出 error reply，除非原始 message 帶有 `NO_REPLY` flag。

#### 竊聽（Eavesdropping）

接收一個 unicast message，但其 `DESTINATION` 指向不同 recipient 的行為稱為 _eavesdropping_。在作為安全邊界（security boundary）的 message bus 上（例如標準 system bus），安全政策通常應阻止 eavesdropping，因為 unicast messages 通常是私密的，且可能包含安全敏感資訊。

eavesdropping 與具備非平凡存取控制限制（non-trivial access control restrictions）的 bus 搭配時互動不佳，且已被 deprecated。
`BecomeMonitor` method（見
[“Method: `org.freedesktop.DBus.Monitoring.BecomeMonitor`”](#bus-messages-become-monitor "Method: org.freedesktop.DBus.Monitoring.BecomeMonitor")）提供更好的監控方式。

eavesdropping 主要用於除錯工具，例如 D-Bus reference implementation 中的 `dbus-monitor`。會對 message bus 進行 eavesdropping 的工具應小心，避免對「原本是要送給不同 client」的 messages 回傳 reply 或 error。

clients 可以透過新增 match rules（見
[“Match Rules”](#message-bus-routing-match-rules "Match Rules")），並包含 `eavesdrop='true'` match 來嘗試 eavesdropping。為了與舊版 message bus implementations 相容，若新增此類 match rule 會得到 error reply，client 可以退回改新增同一條規則，但省略 `eavesdrop` match。

#### Match Rules

message bus 路由協定的重要部分之一是 match rules。match rules 會根據 message 的內容，描述哪些 messages 應被送到 client。broadcast signals 只會送給具有合適 match rule 的 clients：這可以避免喚醒 client processes 去處理與其無關的 signals。

若 messages 的 `DESTINATION` 列出了某 client，則它不需要匹配該 client 的 match rules，仍會被送到該 client。因此 match rules 主要用於接收 broadcast signals 的子集合（subset）。

若 message bus 的安全政策允許，match rules 也可用於 eavesdropping（見
[“Eavesdropping”](#message-bus-routing-eavesdropping "Eavesdropping")），但此用法已被 deprecated，建議改用 `BecomeMonitor` method（見
[“Method: `org.freedesktop.DBus.Monitoring.BecomeMonitor`”](#bus-messages-become-monitor "Method: org.freedesktop.DBus.Monitoring.BecomeMonitor")）。

match rules 透過 AddMatch bus method 加入（見
[“Method: `org.freedesktop.DBus.AddMatch`”](#bus-messages-add-match "Method: org.freedesktop.DBus.AddMatch")）。規則以一個字串指定，字串內容為以逗號分隔的 key/value pairs。若規則中省略某個 key，表示對該 key 使用萬用（wildcard）匹配。例如，從 match rule 中省略 member，但加入 sender，就會允許該 sender 的所有 messages 通過。完整規則的例子：

"type='signal',sender='org.freedesktop.DBus',interface='org.freedesktop.DBus',member='Foo',path='/bar/foo',destination=':452345.34',arg2='bar'"

在單引號（ASCII apostrophe，U+0027）內，反斜線（U+005C）代表其自身，且 apostrophe 會結束引用（quoted）區段。在單引號外，\\'（backslash, apostrophe）代表一個 apostrophe，而任何後面不跟 apostrophe 的 backslash 都代表其自身。例如，match rules `arg0=''\''',arg1='\',arg2=',',arg3='\\'` 與 `arg0=\',arg1=\,arg2=',',arg3=\\` 兩者都能匹配：其 arguments 分別是「包含 apostrophe 的 1 字元字串」、「包含 backslash 的 1 字元字串」、「包含逗號的 1 字元字串」、以及「包含兩個 backslashes 的 2 字元字串」的 messages。\[\[2\]\](#ftn.id-1.13.4.9.6.3)

下表描述可用於建立 match rule 的 keys：

- Key: type
	- Possible Values: 'signal', 'method_call', 'method_return', 'error'
	- Description: 依 message type 匹配。例如 type='signal'
- Key: sender
	- Possible Values: bus name 或 unique name（分別見 Bus Name 與 Unique Connection Name）
	- Description: 匹配由特定 sender 送出的 messages。例如 sender='org.freedesktop.Hal'
- Key: interface
	- Possible Values: interface name（見 “Interface names”）
	- Description: 匹配經由或指向特定 interface 的 messages。例如 interface='org.freedesktop.Hal.Manager'。若某 message 省略了 interface header，它不得匹配任何指定此 key 的規則。
- Key: member
	- Possible Values: 任何有效 method 或 signal name
	- Description: 匹配具有指定 method 或 signal name 的 messages。例如 member='NameOwnerChanged'
- Key: path
	- Possible Values: object path（見 “Valid Object Paths”）
	- Description: 匹配從或送往指定 object 的 messages。例如 path='/org/freedesktop/Hal/Manager'
- Key: path_namespace
	- Possible Values: object path
	- Description: 匹配從或送往某 object 的 messages，其中 object path 不是精確等於指定值，就是以該值為前綴並再接上一個或多個 path components。例如 path_namespace='/com/example/foo' 會匹配 /com/example/foo 或 /com/example/foo/bar 送出的 signals，但不匹配 /com/example/foobar。禁止在同一條 match rule 中同時使用 path 與 path_namespace。此 match key 在 D-Bus specification 0.16 新增，並由 dbus 1.5.0 之後的 bus daemon 實作。
- Key: destination
	- Possible Values: unique name（見 Unique Connection Name）
	- Description: 匹配送往指定 unique name 的 messages。例如 destination=':1.0'
- Key: arg[0, 1, 2, 3, ...]
	- Possible Values: 任意字串
	- Description: Arg matches 是特殊的，用於根據 message body 中的 arguments 進一步限制匹配。只有 STRING 型別的 arguments 才能用此方式匹配。例如 arg3='Foo'。只應接受 0 到 63 的 argument index。
- Key: arg[0, 1, 2, 3, ...]path
	- Possible Values: 任意字串
	- Description: Argument path matches 提供一種針對 path-like namespaces 的特殊 wildcard 匹配。它們可匹配型別為 STRING 或 OBJECT_PATH 的 arguments。與一般 argument matches 相同，若 argument 精確等於 match rule 中的字串則規則成立。此外，若 match rule 的字串或對應的 message argument 以 '/' 結尾，且其中一方是另一方的前綴，也會匹配。例如 arg0path='/aa/bb/' 會匹配第一個 argument 為 '/'、'/aa/'、'/aa/bb/'、'/aa/bb/cc/' 與 '/aa/bb/cc' 的 messages；但不匹配第一個 argument 為 '/aa/b'、'/aa'，甚至 '/aa/bb' 的 messages。此設計用於監控檔案系統式階層（hierarchies）中的“directories”，例如 dconf 設定系統。若某 application 對特定階層的所有 nodes 都感興趣，它會監控 arg0path='/ca/example/foo/'。之後 service 可以送出第 0 個 argument 為 "/ca/example/foo/bar" 的 signal 表示修改 “bar” property，或送出第 0 個 argument 為 "/ca/example/" 的 signal 表示對該目錄內多個 properties 的原子修改（atomic modification），而關心的 application 在兩種情況下都會被通知。此 match key 在 D-Bus specification 0.12 新增；對 STRING arguments 的支援由 dbus 1.2.0 之後的 bus daemon 實作；對 OBJECT_PATH arguments 的支援在 dbus 1.5.0 之後加入。
- Key: arg0namespace
	- Possible Values: 類似 bus name，但字串不要求包含 '.'（period）
	- Description: 匹配 messages：其第一個 argument 型別為 STRING，且該值是位於指定 namespace 內的 bus name 或 interface name。其主要用途是監看一群相關 bus names 的 name owner changes，而不是單一 name 或所有 name changes。由於每個有效 interface name 同時也是有效 bus name，因此也可用於第一個 argument 是 interface name 的 messages。例如，規則 member='NameOwnerChanged',arg0namespace='com.example.backend1' 會匹配 com.example.backend1.foo、com.example.backend1.foo.bar、以及 com.example.backend1 本身等 bus names 的 name owner changes。另見 “Signal: org.freedesktop.DBus.NameOwnerChanged”。此 match key 在 D-Bus specification 0.16 新增，並由 dbus 1.5.0 之後的 bus daemon 實作。
- Key: eavesdrop
	- Possible Values: 'true', 'false'
	- Description: 自 D-Bus 1.5.6 起，match rules 不會匹配具有 DESTINATION 欄位的 messages，除非 match rule 透過在規則中指定 eavesdrop='true'（見 “Eavesdropping”）明確請求此行為。eavesdrop='false' 會恢復預設行為。messages 仍會不論 match rules 投遞到其 DESTINATION，因此此 match 不影響一般的 unicast messages 投遞。在較舊版本的 D-Bus 中，match rules 不允許此 match，且所有 match rules 的行為都等同於使用了 eavesdrop='true'。使用 eavesdrop='true' 已被 deprecated。Monitors 應優先使用 BecomeMonitor method（見 “Method: org.freedesktop.DBus.Monitoring.BecomeMonitor”），該 method 在 D-Bus specification 0.26 與 reference dbus-daemon 1.9.10 中引入。message bus implementations 可能限制 eavesdrop='true' 的 match rules，使其只能由特權連線加入。此 match key 在 D-Bus specification 0.18 新增，並由 dbus 1.5.6 之後的 bus daemon 實作。

### 訊息匯流排啟動服務（Activation）（Message Bus Starting Services (Activation)）

message bus 可以代表其他 applications 啟動 applications。這稱為 _service activation_ 或 _activation_。能以此方式被啟動的 application 稱為 _service_ 或 _activatable service_。

_Starting a service_ 應被視為與 service activation 同義。

在 D-Bus 中，service activation 通常透過 _auto-starting_ 完成。在 auto-starting 中，applications 送出一個 message 給某個特定 well-known name（例如 `com.example.TextEditor1`），且在 message header 中不指定 `NO_AUTO_START` flag。若 bus 上沒有 application 擁有所請求的 name，但 bus daemon 知道如何為該 name 啟動一個 activatable service，則 bus daemon 會啟動該 service，等待它請求那個 name，並將 message 投遞給它。

applications 也可以送出「明確要求啟動某 service」的請求：這是另一種 activation 形式，與 auto-starting 不同。詳情見
[“Method: `org.freedesktop.DBus.StartServiceByName`”](#bus-messages-start-service-by-name "Method: org.freedesktop.DBus.StartServiceByName")。

不論哪種情況，這都意味著：對 name `com.example.TextEditor1` 會有一個合約（contract）被記錄下來，描述該 name 的 owner 會提供哪些 objects，以及那些 objects 會有哪些 interfaces。

為了找出對應某個特定 name 的可執行檔（executable），bus daemon 會尋找 _service description files_。service description files 定義從 names 到 executables 的映射（mapping）。不同種類的 message bus 會在不同位置尋找這些檔案，見
[“Well-known Message Bus Instances”](#message-bus-types "Well-known Message Bus Instances")。

service description files 的副檔名為 ".service"。message bus 只會載入以 `.service` 結尾的 service description files；所有其他檔案都會被忽略。檔案格式類似於
[desktop entries](http://standards.freedesktop.org/desktop-entry-spec/desktop-entry-spec-latest.html)。所有 service description files 必須是 UTF-8 編碼。為確保不會發生 name collisions，service files 必須使用與 messages 及 service names 相同的 namespacing 機制。

在 well-known system bus 上，service description file 的名稱必須是其 well-known name 加上 `.service`，例如 `com.example.ConfigurationDatabase1.service`。

在 well-known session bus 上，services 應遵循與 system bus 相同的 service description file 命名慣例，但為了向後相容（backwards compatibility），並不要求一定要這麼做。

\[FIXME the file format should be much better specified than "similar to
.desktop entries" esp. since desktop entries are already badly-specified. ;-)\]
這份規格中的下列段落同樣適用於 service files：

- General syntax
- Comment format

service description files 必須包含一個 `D-BUS Service` group，並至少包含 keys `Name`（service 的 well-known name）與 `Exec`（要執行的命令）。

**Figure 9. Example service description file（範例 service description file）**

```
						# Sample service description file
						[D-BUS Service]
						Name=com.example.ConfigurationDatabase1
						Exec=/usr/bin/sample-configd

```

此外，在 Unix 上 well-known system bus 的 service description files 必須包含 `User` key，其值為某個使用者帳號的名稱（例如 `root`）。system service 會以該使用者身份執行。

當 application 要求以 name 啟動某 service 時，bus daemon 會嘗試找出一個將擁有該 name 的 service，然後嘗試 spawn 與其關聯的 executable。若失敗，它會回報錯誤。

在 well-known system bus 上，不可能讓同一個目錄中的兩個 `.service` 檔案提供相同 service，因為它們被限制必須具有與 service name 相符的檔名。

在 well-known session bus 上，若同一個目錄中的兩個 `.service` 檔案提供相同 service name，結果是未定義（undefined）。distributors 應避免此情形，例如依照 service name 來命名 session services 的 `.service` 檔案。

若不同目錄中的兩個 `.service` 檔案提供相同 service name，會使用優先序較高（higher-priority）目錄中的那一個：例如在 system bus 上，/etc/dbus-1/system-services 中的 `.service` 檔案優先於 /run/dbus-1/system-services，後者又優先於 /usr/local/share/dbus-1/system-services，接著優先於 /usr/share/dbus-1/system-services。

被啟動的 executable 會被設定環境變數 `DBUS_STARTER_ADDRESS`，其值為 message bus 的 address，以便它能連線並請求相應的 names。

被啟動的 executable 可能想知道啟動它的 message bus 是否為 well-known message buses 之一（見
[“Well-known Message Bus Instances”](#message-bus-types "Well-known Message Bus Instances")）。為了方便起見，若 bus 是 well-known buses 之一，它也必須設定環境變數 `DBUS_STARTER_BUS_TYPE`。目前定義的值為：systemwide message bus 使用 `system`，而每個 login session 的 message bus 使用 `session`。新的 executable 仍必須連到 `DBUS_STARTER_ADDRESS` 給出的 address，但可以假設連線結果是連到 well-known bus。

\[FIXME there should be a timeout somewhere, either specified in the .service
file, by the client, or just a global value and if the client being activated
fails to connect within that timeout, an error should be sent back.\]

#### 訊息匯流排服務範圍（Message Bus Service Scope）

service 的 "scope" 是指其 "per-" 範圍，例如 per-session、per-machine、per-home-directory 或 per-display。reference implementation 目前尚不支援在不同於 message bus 本身 scope 的 scope 中啟動 services。因此例如：若你在 session bus 上啟動某 service，它的 scope 就是 per-session。

我們可以替 bus name 加上一個可選的 scope。例如，對於 per-(display,session pair)，我們可以為每個 display 產生一個在登入時自動產生的 unique ID，並透過執行特殊的 “set display ID” binary 設到 screen 0。此 ID 會被儲存在 `_DBUS_DISPLAY_ID` property，且會是一個由隨機位元組（random bytes）組成的字串。接著就可以使用此 ID 來對 names 進行 scope。
啟動/定位 service 的方式就可以改用 ID-name pair，而不是只用 name。

將這與 per-display scope 做對比。要達成 per-display，我們希望有一個跨越（spanning）某個 display 上所有 sessions 的單一 bus。因此我們可能在該 display 的 screen 0 上設定 `_DBUS_DISPLAY_BUS_ADDRESS` property，指向這個 bus。

#### systemd Activation

service description files 可以包含 `SystemdService` key。其值為某個 [systemd](https://www.freedesktop.org/wiki/Software/systemd/) service 的名稱，例如 `dbus-com.example.MyDaemon.service`。

若此 key 存在，bus daemon 可以透過向 systemd 發送請求，要求它啟動名為 `SystemdService` 值的 systemd service，來為此 D-Bus service 執行 activation。例如，reference `dbus-daemon` 有一個 `--systemd-activation` 選項可啟用此功能，而當它被 systemd 啟動時會帶上該選項。

在 well-known system bus 上，常見做法是把 `SystemdService` 設為 `dbus-` + well-known bus name + `.service`，然後將該名稱註冊成真實 systemd service 的 alias。這使得「D-Bus activation 是否啟用」可以獨立於「service 是否在開機時由 systemd 啟動」。

#### 使用 AppArmor 調解（mediation）Activation（Mediating Activation with AppArmor）

關於 AppArmor 的一般資訊，以及當其與支援 AppArmor 的 kernel 與 `dbus-daemon` 結合使用時如何調解 D-Bus messages，請參考
[AppArmor documentation](http://wiki.apparmor.net/index.php/Documentation)。

在近期版本的 reference `dbus-daemon` 中，型別為 `dbus send` 的 AppArmor policy rules 也用來控制 auto-starting：若 message 被送往某個 activatable service 的 well-known name，`dbus-daemon` 會嘗試在 _auto-starting 之前_ 判斷它是否會將 message 投遞到該 service，方法是對啟動後的 process credentials 做一些假設（assumptions）。

若它確實繼續 auto-starting，當 service 出現後，`dbus-daemon` 會在投遞 message 前，再用 service 的真實 credentials（可能不完全相同）重新做一次 policy check。實務上第二次檢查通常會比第一次更嚴格；只有在存在像 `deny dbus send peer=(label=/usr/bin/protected)` 這類 “blacklist”-style 規則、且會根據 peer 的特定 credentials 來匹配時，第一次檢查才可能更嚴格。但 AppArmor 通常以 “whitelist” 風格使用，因此不適用。

為了支援此流程，service description files 可以包含 `AssumedAppArmorLabel` key。其值為某個 AppArmor label 的名稱，例如 `/usr/sbin/mydaemon`。若此 key 存在，對於會 auto-start 某 service 的 messages，AppArmor mediation 在決定是否允許 auto-starting 發生時，會假設被啟動的 service 會被限制（confined）在指定 label 之下；特別是，形如 `dbus send peer=(label=/usr/sbin/mydaemon)` 或 `deny dbus send peer=(label=/usr/sbin/mydaemon)` 的規則會匹配它，並相應允許或拒絕（即使實際上沒有載入該名稱的 profile）。

否則，對於會 auto-start 某 service 的 messages，AppArmor mediation 在決定是否允許 auto-starting 時，不會指定任何特定 label。特別是，任何形如 `dbus send peer=(label=X)` 或 `deny dbus send peer=(label=X)`（X 可為任意值，包括特殊 label `unconfined`）的規則，都不會影響 auto-start 是否被允許。

在決定是否允許 auto-starting 時，不會檢查 `dbus receive` 類型的規則；它們只會在 service 啟動之後，對照 service 的 profile 來檢查，以決定是否投遞造成 auto-starting 的那個 message。

透過
[StartServiceByName](#bus-messages-start-service-by-name "Method: org.freedesktop.DBus.StartServiceByName")
method call 進行的「明確 activation」目前不受此 mediation 影響：若要阻止某 confined process 啟動任意 services，就必須不允許它呼叫該 method。

### 已知（well-known）的 Message Bus 實例（Well-known Message Bus Instances）

此處定義兩個標準 message bus 實例，以及如何定位它們與它們的 service files 位於何處。

#### Login session message bus

每次使用者登入時，可以啟動一個 _login session message bus_。使用者 login session 中的所有 applications 都可使用此 message bus 彼此互動。

login session message bus 的 address 會放在環境變數 `DBUS_SESSION_BUS_ADDRESS`。如果該變數未設定，applications 也可以嘗試從 X Window System 的 root window property `_DBUS_SESSION_BUS_ADDRESS` 讀取 address。root window property 的 type 必須是 `STRING`。環境變數應優先於 root window property。

login session message bus 的 address 會放在環境變數 `DBUS_SESSION_BUS_ADDRESS`。如果 DBUS_SESSION_BUS_ADDRESS 未設定，或其值為字串 "autolaunch:"，系統應使用平台特定的方法來定位正在執行的 D-Bus session server，或在找不到正在執行的實例時啟動一個。注意此機制不建議用來判斷 daemon 是否正在執行。嘗試做此判斷天生就有競態條件（racy），因為 bus daemon 可能在你判斷之前或之後剛好啟動。因此建議 applications 不要依賴此判斷來達成功能目的，而是應嘗試啟動 server。

##### X Windowing System

在 X Windowing System 中，application 必須定位 selection 的 window owner；該 selection 由以下內容串接（concatenating）形成的 atom 表示：

- 字面量字串 "\_DBUS_SESSION_BUS_SELECTION\_"
- 目前使用者的 username
- 字面量字元 '\_'（underscore）
- machine's ID

擁有此 X selection 的 window 定義下列 properties：

- Atom: _DBUS_SESSION_BUS_ADDRESS
	- meaning: server socket 的實際 address
- Atom: _DBUS_SESSION_BUS_PID
	- meaning: server process 的 PID

至少必須存在 \_DBUS_SESSION_BUS_ADDRESS property。

若無法定位 X selection，或從 window 讀取 properties 失敗，實作必須判定沒有 D-Bus server 正在執行，並繼續啟動一個新的 server。（見下方關於 concurrency issues 的說明）

無法連線到以此方式取得的 D-Bus server address，必須被視為致命（fatal）的連線錯誤，且應回報給 application。

作為替代方案，實作可以在目前使用者 home directory 的子目錄 `.dbus/session-bus/` 中，從下列規則所指定的檔案取得資訊：

- machine's ID
- 字面量字元 '-'（dash）
- 去掉 screen number 的 X display，並移除（若存在）以下前綴：":", "localhost:" ."localhost.localdomain:"。也就是說，display "localhost:10.0" 會只產生數字 "10"

此檔案內容為 NAME=value 指派對（assignment pairs），以 # 開頭的行為註解（除此之外不允許註解）。定義下列變數名稱：

- Variable: DBUS_SESSION_BUS_ADDRESS
	- meaning: server socket 的實際 address
- Variable: DBUS_SESSION_BUS_PID
	- meaning: server process 的 PID
- Variable: DBUS_SESSION_BUS_WINDOWID
	- meaning: window ID

至少必須在此檔案中出現 DBUS_SESSION_BUS_ADDRESS 變數。

無法開啟此檔案必須被解讀為不存在正在執行的 server。因此如果檔案無法開啟，實作必須繼續嘗試啟動新的 bus server。

然而，成功開啟此檔案不得導致「server 正在執行」的結論。因此，若用替代方法取得的 bus address 無法建立連線，不得視為致命錯誤。若無法建立連線，實作必須繼續檢查 X selection 設定，或自行啟動 server。

若實作判定 D-Bus server 未在執行，它必須嘗試啟動新的 server，且必須確保由 “autolaunch” 機制啟動的 daemon 會提供上述查找機制，以便後續呼叫能定位新啟動的 server。實作也必須確保若發生兩個或更多的並行啟動（concurrent initiations），最終只有一個 server 會保持執行，且所有其他啟動流程都能取得該 server 的 address 並連線。換言之，實作必須確保它在嘗試設定 X selection 時，selection 尚未存在，同時不允許另一個 process 在驗證與設定之間插入設定 selection 的行為（例如使用 XGrabServer / XungrabServer）。

##### 尋找 session services（Finding session services）

在 Unix 系統上，session bus 應依據
[XDG Base Directory Specification](http://standards.freedesktop.org/basedir-spec/basedir-spec-latest.html)
在 `$XDG_DATA_DIRS/dbus-1/services` 中搜尋 `.service` 檔案。實作也可以搜尋額外的位置，並給予比 XDG directories 更高或更低的優先序。

如 XDG Base Directory Specification 所述，software packages 應將其 session `.service` 檔安裝到其設定的 `${datadir}/dbus-1/services`，其中 `${datadir}` 由 GNU coding standards 定義。系統管理者或使用者可透過設定 XDG_DATA_DIRS，或將它們 symlink 到預設位置，來安排這些 service files 被讀取。

#### System message bus

一台電腦可以有一個 _system message bus_，可供系統上所有 applications 存取。此 message bus 可用於廣播系統事件，例如新增硬體裝置、印表機佇列變更等。

system message bus 的 address 會放在環境變數 `DBUS_SYSTEM_BUS_ADDRESS`。如果該變數未設定，applications 應嘗試連線到 well-known address `unix:path=/var/run/dbus/system_bus_socket`。well-known system bus 的實作應在某個 address 上 listen，使得上述連線能成功。

在 `/var/run/` 已知與 `/run/` 同義（synonymous）的系統上（例如多數 Linux 發行版），實作可能會偏好使用該知識，改連線或 listen 在 `unix:path=/run/dbus/system_bus_socket`，其有一些輕微的技術優點，特別是在早期啟動與晚期關機期間。

在實務上，D-Bus 的實作常常有 build-time 的設定選項來指定 system bus address，其預設值也常依賴其他 build-time 選項（特別是安裝 prefix；dbus（reference implementation）即是如此）。打算提供 well-known system bus 存取能力的 distributors 應確認它們使用的是可互通（interoperable）的 address。

在 Unix 系統上，system bus 預設應依以下優先序搜尋 `.service` 檔案：`/etc/dbus-1/system-services`、`/run/dbus-1/system-services`、`/usr/local/share/dbus-1/system-services`、`/usr/share/dbus-1/system-services` 與 `/lib/dbus-1/system-services`。它也可以搜尋其他實作特定位置，但不應根據環境變數而改變這些位置。`/etc/` 中的目錄保留供本機系統管理者使用，或資產管理系統（asset manager）部署不屬於 OS 的 services。`/run/` 中的目錄保留給在 reboot 後會消失的暫時性（ephemeral）services。\[\[3\]\](#ftn.id-1.13.6.4.6.8)

software packages 應將其 system `.service` 檔安裝到其設定的 `${datadir}/dbus-1/system-services`，其中 `${datadir}` 由 GNU coding standards 定義。系統管理者可透過編輯 system bus 的設定檔或 symlink 到預設位置，來安排這些 service files 被讀取。

### Message Bus 介面：`org.freedesktop.DBus`

特殊的 message bus name `org.freedesktop.DBus` 會在 object path `/org/freedesktop/DBus` 上回應多種額外 messages，並實作 `org.freedesktop.DBus` 介面。當發出 signals（例如
[NameOwnerChanged](#bus-messages-name-owner-changed "Signal: org.freedesktop.DBus.NameOwnerChanged")）時，也會使用此 object path。

基於歷史原因，`org.freedesktop.DBus` 介面中的部分 methods 也可在多個 object paths 上使用。message bus implementations 應接受在 specification version 0.26 之前加入的 method calls（在任何 object path 上）。message bus implementations 不應在非預期的 object paths 上接受較新的 method calls；並且作為安全強化（security hardening）措施，對於某些安全敏感的舊 method calls，若在非預期 object path 上呼叫，可能以錯誤 `org.freedesktop.DBus.Error.AccessDenied` 拒絕。client 軟體應將所有 method calls 都送往 `/org/freedesktop/DBus`，而不是依賴此歷史行為。

#### Method: `org.freedesktop.DBus.Hello`

As a method:

```
						STRING Hello ()

```

Reply arguments:

| Argument | Type   | Description                            |
| -------- | ------ | -------------------------------------- |
| 0        | STRING | Unique name assigned to the connection |

在 application 能夠送 messages 給其他 applications 之前，它必須先送出 `org.freedesktop.DBus.Hello` message 給 message bus，以取得 unique name。若一個尚未擁有 unique name 的 application 嘗試送出 message 給其他 application，或送 message 給 message bus 本身（但不是 `org.freedesktop.DBus.Hello` message），它會被從 bus 上斷線（disconnected）。

沒有對應的 “disconnect” 請求；如果 client 想與 bus 斷線，它只要關閉 socket（或其他通訊通道）即可。

#### Method: `org.freedesktop.DBus.RequestName`

As a method:

```
						UINT32 RequestName (in STRING name, in UINT32 flags)

```

Message arguments:

| Argument | Type   | Description     |
| -------- | ------ | --------------- |
| 0        | STRING | Name to request |
| 1        | UINT32 | Flags           |

Reply arguments:

| Argument | Type   | Description  |
| -------- | ------ | ------------ |
| 0        | UINT32 | Return value |

要求 message bus 將給定的 name 指派給 method 呼叫者。每個 name 都維護一個可能 owners 的佇列（queue），佇列頭（head）是該 name 的 primary 或 current owner。佇列中的每個 potential owner 都會從其最近一次 RequestName 呼叫中，維持 DBUS_NAME_FLAG_ALLOW_REPLACEMENT 與 DBUS_NAME_FLAG_DO_NOT_QUEUE 的設定。呼叫 RequestName 時會發生下列行為：

- 如果 method caller 目前就是該 name 的 primary owner，則會用新的 RequestName 呼叫所提供的值，更新 DBUS_NAME_FLAG_ALLOW_REPLACEMENT 與 DBUS_NAME_FLAG_DO_NOT_QUEUE，除此之外不會再發生其他事。
- 如果目前的 primary owner（佇列頭）設定了 DBUS_NAME_FLAG_ALLOW_REPLACEMENT，且本次 RequestName 呼叫帶有 DBUS_NAME_FLAG_REPLACE_EXISTING flag，則 RequestName 的 caller 會取代目前 primary owner 成為佇列頭，而原本的 primary owner 會移到佇列中的第二個位置。若 RequestName 的 caller 先前已在佇列中，則除了移到佇列頭之外，它的 flags 也會更新為新的 RequestName 呼叫所提供的值。
- 若無法 replacement，且 method caller 目前在佇列中但不是 primary owner，則它的 flags 會更新為新的 RequestName 呼叫所提供的值。
- 若無法 replacement，且 method caller 目前不在佇列中，則 method caller 會被附加（appended）到佇列尾端。
- 若佇列中任何 connection 設定了 DBUS_NAME_FLAG_DO_NOT_QUEUE 且不是 primary owner，則它會被從佇列移除。此情況可套用到先前的 primary owner（若它被取代），或套用到 method caller（若它在仍卡在佇列中時更新了 DBUS_NAME_FLAG_DO_NOT_QUEUE flag，或它剛被加入佇列且帶著該 flag）。

注意：DBUS_NAME_FLAG_REPLACE_EXISTING 會導致 “jumping the queue”，即使佇列中已有另一個 application 指定了 DBUS_NAME_FLAG_REPLACE_EXISTING。此情況會在「一個不允許 replacement 的 primary owner 消失」且「下一個 primary owner 允許 replacement」時發生。在這種情況下，佇列中指定 DBUS_NAME_FLAG_REPLACE_EXISTING 的項目，_不會_ 自動取代新的 primary owner。換言之，DBUS_NAME_FLAG_REPLACE_EXISTING 不會被保存（saved），它只在 RequestName 被呼叫的當下使用。這是刻意設計，用以避免當兩個 applications 同時具有 DBUS_NAME_FLAG_ALLOW_REPLACEMENT 與 DBUS_NAME_FLAG_REPLACE_EXISTING 時，造成無限迴圈（infinite loop）。

flags 引數包含下列任意值的邏輯 OR 組合：

- Conventional Name: DBUS_NAME_FLAG_ALLOW_REPLACEMENT
	- Value: 0x1
	- Description: 若 application A 指定此 flag 且成功成為該 name 的 owner，之後另一個 application B 呼叫 RequestName 並帶有 DBUS_NAME_FLAG_REPLACE_EXISTING flag，則 application A 會失去 ownership 並收到 org.freedesktop.DBus.NameLost signal，而 application B 會成為新的 owner。若 application A 未指定 DBUS_NAME_FLAG_ALLOW_REPLACEMENT，或 application B 未指定 DBUS_NAME_FLAG_REPLACE_EXISTING，則 application B 不會取代 application A 成為 owner。
- Conventional Name: DBUS_NAME_FLAG_REPLACE_EXISTING
	- Value: 0x2
	- Description: 若存在 current owner，嘗試取代它。若未設定此 flag，application 只會在沒有 current owner 時才會成為 owner。若設定此 flag，application 會在 current owner 指定了 DBUS_NAME_FLAG_ALLOW_REPLACEMENT 的情況下取代 current owner。
- Conventional Name: DBUS_NAME_FLAG_DO_NOT_QUEUE
	- Value: 0x4
	- Description: 在沒有此 flag 時，若 application 請求一個已被擁有的 name，application 會被放入佇列，等待 current owner 放棄該 name 後成為 owner。若提供此 flag，application 不會被放入佇列，對該 name 的請求會直接失敗。此 flag 也會影響名稱 owner 被取代時的行為；預設情況下 application 會回到等待佇列中，除非 application 在成為 name owner 時提供了此 flag。

return code 可能是下列任一值：

- Conventional Name: DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER
	- Value: 1
	- Description: 呼叫者現在是該 name 的 primary owner，取代任何先前 owner。要嘛該 name 先前沒有 owner，要嘛呼叫者指定了 DBUS_NAME_FLAG_REPLACE_EXISTING 且 current owner 指定了 DBUS_NAME_FLAG_ALLOW_REPLACEMENT。
- Conventional Name: DBUS_REQUEST_NAME_REPLY_IN_QUEUE
	- Value: 2
	- Description: 該 name 已有 owner，且未指定 DBUS_NAME_FLAG_DO_NOT_QUEUE；並且 current owner 未指定 DBUS_NAME_FLAG_ALLOW_REPLACEMENT 或請求的 application 未指定 DBUS_NAME_FLAG_REPLACE_EXISTING。
- Conventional Name: DBUS_REQUEST_NAME_REPLY_EXISTS
	- Value: 3
	- Description: 該 name 已有 owner，且指定了 DBUS_NAME_FLAG_DO_NOT_QUEUE；並且 current owner 未指定 DBUS_NAME_FLAG_ALLOW_REPLACEMENT，或請求的 application 未指定 DBUS_NAME_FLAG_REPLACE_EXISTING。
- Conventional Name: DBUS_REQUEST_NAME_REPLY_ALREADY_OWNER
	- Value: 4
	- Description: 嘗試請求某 name ownership 的 application 已經是該 name 的 owner。

#### Method: `org.freedesktop.DBus.ReleaseName`

As a method:

```
						UINT32 ReleaseName (in STRING name)

```

Message arguments:

| Argument | Type   | Description     |
| -------- | ------ | --------------- |
| 0        | STRING | Name to release |

Reply arguments:

| Argument | Type   | Description  |
| -------- | ------ | ------------ |
| 0        | UINT32 | Return value |

要求 message bus 釋放 method caller 對給定 name 的宣告（claim）。若 caller 是 primary owner，且佇列中有其他 owner 在等待，則會從佇列中選出新的 primary owner。若 caller 正在佇列中等待該 name，caller 會從佇列移除，且日後即使該 name 可用也不會成為 owner。若該 name 的佇列中沒有其他 owners，該 name 會從 bus 上完全移除。return code 可能是下列任一值：

- Conventional Name: DBUS_RELEASE_NAME_REPLY_RELEASED
	- Value: 1
	- Description: caller 已釋放其對給定 name 的宣告。要嘛 caller 是該 name 的 primary owner，且該 name 現在未被使用或被佇列中等待者取得；要嘛 caller 先前在佇列中等待該 name，且現在已從佇列移除。
- Conventional Name: DBUS_RELEASE_NAME_REPLY_NON_EXISTENT
	- Value: 2
	- Description: 給定 name 在此 bus 上不存在。
- Conventional Name: DBUS_RELEASE_NAME_REPLY_NOT_OWNER
	- Value: 3
	- Description: caller 不是此 name 的 primary owner，且也沒有在佇列中等待擁有此 name。

#### Method: `org.freedesktop.DBus.ListQueuedOwners`

As a method:

```
						ARRAY of STRING ListQueuedOwners (in STRING name)

```

Message arguments:

- Argument: 0
	- Type: STRING
	- Description: 要查詢的 well-known bus name，例如 com.example.cappuccino

Reply arguments:

- Argument: 0
	- Type: ARRAY of STRING
	- Description: 目前為該 name 排隊的 connections 的 unique bus names

列出目前為某個 bus name 排隊中的 connections（見
[Queued Name Owner](#term-queued-owner "Queued Name Owner")）。

#### Method: `org.freedesktop.DBus.ListNames`

As a method:

```
						ARRAY of STRING ListNames ()

```

Reply arguments:

| Argument | Type            | Description                                      |
| -------- | --------------- | ------------------------------------------------ |
| 0        | ARRAY of STRING | Array of strings where each string is a bus name |

回傳目前 bus 上所有「已被擁有」（currently-owned）的 names 清單。

#### Method: `org.freedesktop.DBus.ListActivatableNames`

As a method:

```
						ARRAY of STRING ListActivatableNames ()

```

Reply arguments:

| Argument | Type            | Description                                      |
| -------- | --------------- | ------------------------------------------------ |
| 0        | ARRAY of STRING | Array of strings where each string is a bus name |

回傳 bus 上所有「可被啟動」（can be activated）的 names 清單。

#### Method: `org.freedesktop.DBus.NameHasOwner`

As a method:

```
						BOOLEAN NameHasOwner (in STRING name)

```

Message arguments:

| Argument | Type   | Description   |
| -------- | ------ | ------------- |
| 0        | STRING | Name to check |

Reply arguments:

| Argument | Type    | Description                           |
| -------- | ------- | ------------------------------------- |
| 0        | BOOLEAN | Return value, true if the name exists |

檢查指定的 name 是否存在（目前是否有 owner）。

#### Signal: `org.freedesktop.DBus.NameOwnerChanged`

This is a signal:

```
						NameOwnerChanged (STRING name, STRING old_owner, STRING new_owner)

```

Message arguments:

| Argument | Type   | Description                       |
| -------- | ------ | --------------------------------- |
| 0        | STRING | Name with a new owner             |
| 1        | STRING | Old owner or empty string if none |
| 2        | STRING | New owner or empty string if none |

此 signal 表示某個 name 的 owner 已變更。它也是用來偵測 bus 上出現新 names 的 signal。

#### Signal: `org.freedesktop.DBus.NameLost`

This is a signal:

```
						NameLost (STRING name)

```

Message arguments:

| Argument | Type   | Description         |
| -------- | ------ | ------------------- |
| 0        | STRING | Name which was lost |

當某個特定 application 失去某 name 的 ownership 時，此 signal 會被送給它。

#### Signal: `org.freedesktop.DBus.NameAcquired`

This is a signal:

```
						NameAcquired (STRING name)

```

Message arguments:

| Argument | Type   | Description             |
| -------- | ------ | ----------------------- |
| 0        | STRING | Name which was acquired |

當某個特定 application 取得某 name 的 ownership 時，此 signal 會被送給它。

#### Signal: `org.freedesktop.DBus.ActivatableServicesChanged`

This is a signal:

```
						ActivatableServicesChanged ()

```

當可被啟動的 services 清單（由 ListActivatableNames() 回傳者）可能已變更時，此 signal 會被送出（見
[“Method: `org.freedesktop.DBus.ListActivatableNames`”](#bus-messages-list-activatable-names "Method: org.freedesktop.DBus.ListActivatableNames")）。
已快取（cached）可被啟動 services 資訊的 clients 應再次呼叫 ListActivatableNames() 以更新其快取。

此 signal 的存在由一個 bus feature property 指示（詳見
[“Property: `org.freedesktop.DBus.Features`”](#message-bus-properties-features "Property: org.freedesktop.DBus.Features")）。
在沒有此 feature 的較舊實作中，沒有任何方式能在可被啟動 names 清單變更時獲得通知。

#### Method: `org.freedesktop.DBus.StartServiceByName`

As a method:

```
						UINT32 StartServiceByName (in STRING name, in UINT32 flags)

```

Message arguments:

| Argument | Type   | Description                  |
| -------- | ------ | ---------------------------- |
| 0        | STRING | Name of the service to start |
| 1        | UINT32 | Flags (currently not used)   |

Reply arguments:

| Argument | Type   | Description  |
| -------- | ------ | ------------ |
| 0        | UINT32 | Return value |

以「明確請求」方式（explicit request）嘗試啟動與某個 name 關聯的 executable（service activation）。這是依賴 auto-starting 的替代方案。關於 service 如何被啟動，以及 auto-starting 與 explicit activation 的差異，見
[“Message Bus Starting Services (Activation)”](#message-bus-starting-services "Message Bus Starting Services (Activation)")。

通常更建議使用 auto-starting 而不是呼叫此 method。原因是呼叫此 method 會受到
[time-of-check/time-of-use](https://en.wikipedia.org/wiki/Time_of_check_to_time_of_use)
問題影響：如果呼叫者要求 message bus 啟動某 service，並打算由同一呼叫者對該 service 進行後續 method calls，那麼「message bus 能啟動所需 service」並不保證在呼叫者發出後續 method calls 時，該 service 不會已 crash 或以其他方式退出。因此呼叫此 method 並不能免除呼叫者處理 method calls 錯誤的需求。既然如此，通常依賴 auto-starting 會更簡單：所需 service 會作為第一個 method call 的副作用（side-effect）而啟動。

return value 可能是下列任一值：

| Identifier                       | Value | Description                               |
| -------------------------------- | ----- | ----------------------------------------- |
| DBUS_START_REPLY_SUCCESS         | 1     | The service was successfully started.     |
| DBUS_START_REPLY_ALREADY_RUNNING | 2     | A connection already owns the given name. |

#### Method: `org.freedesktop.DBus.UpdateActivationEnvironment`

As a method:

```
						UpdateActivationEnvironment (in ARRAY of DICT_ENTRY<STRING,STRING> environment)

```

Message arguments:

| Argument | Type                               | Description                  |
| -------- | ---------------------------------- | ---------------------------- |
| 0        | ARRAY of DICT_ENTRY<STRING,STRING> | Environment to add or update |

通常，session bus 所啟動（activated）的 services 會繼承 bus daemon 的環境變數。此 method 會在啟動 services 時，新增或修改該環境。

某些 bus instances（例如標準 system bus）可能會對部分或全部呼叫者禁用此 method 的存取。

注意：環境變數的名稱與值都必須是有效 UTF-8。無法用無效 UTF-8 的資料更新 activation environment。

#### Method: `org.freedesktop.DBus.GetNameOwner`

As a method:

```
						STRING GetNameOwner (in STRING name)

```

Message arguments:

| Argument | Type   | Description              |
| -------- | ------ | ------------------------ |
| 0        | STRING | Name to get the owner of |

Reply arguments:

| Argument | Type   | Description                            |
| -------- | ------ | -------------------------------------- |
| 0        | STRING | Return value, a unique connection name |

回傳給定 name 的 primary owner 的 unique connection name。若請求的 name 沒有 owner，則回傳 `org.freedesktop.DBus.Error.NameHasNoOwner` error。

#### Method: `org.freedesktop.DBus.GetConnectionUnixUser`

As a method:

```
						UINT32 GetConnectionUnixUser (in STRING bus_name)

```

Message arguments:

- Argument: 0
	- Type: STRING
	- Description: 要查詢的 connection 的 Unique 或 well-known bus name，例如 :12.34 或 com.example.tea

Reply arguments:

| Argument | Type   | Description  |
| -------- | ------ | ------------ |
| 0        | UINT32 | Unix user ID |

回傳連到 server 的 process 的 Unix user ID。若無法判定（例如該 process 不在與 bus daemon 相同的機器上），則回傳 error。

#### Method: `org.freedesktop.DBus.GetConnectionUnixProcessID`

As a method:

```
						UINT32 GetConnectionUnixProcessID (in STRING bus_name)

```

Message arguments:

- Argument: 0
	- Type: STRING
	- Description: 要查詢的 connection 的 Unique 或 well-known bus name，例如 :12.34 或 com.example.tea

Reply arguments:

| Argument | Type   | Description     |
| -------- | ------ | --------------- |
| 0        | UINT32 | Unix process id |

回傳連到 server 的 process 的 Unix process ID。若無法判定（例如該 process 不在與 bus daemon 相同的機器上），則回傳 error。

#### Method: `org.freedesktop.DBus.GetConnectionCredentials`

As a method:

```
						ARRAY of DICT_ENTRY<STRING,VARIANT> GetConnectionCredentials (in STRING bus_name)

```

Message arguments:

- Argument: 0
	- Type: STRING
	- Description: 要查詢的 connection 的 Unique 或 well-known bus name，例如 :12.34 或 com.example.tea

Reply arguments:

| Argument | Type                                | Description |
| -------- | ----------------------------------- | ----------- |
| 0        | ARRAY of DICT_ENTRY<STRING,VARIANT> | Credentials |

盡可能回傳該 process 的 credentials。若無法判定某些 credentials（例如 process 不在與 bus daemon 相同的機器上，或此版本的 bus daemon 不支援某個特定安全框架），或某些 credential 的值無法用此處文件化的方式表示，則那些 credentials 會被省略。

回傳 dictionary 中不包含 "." 的 keys 由本規格定義。支援此文件未提及之 credentials framework 的 bus daemon implementors，應提出 patch 來更新本規格，或使用包含 "." 且以反轉網域名稱（reversed domain name）開頭的 keys。

- Key: UnixUserID
	- Value type: UINT32
	- Value: POSIX 定義的數值型 Unix user ID
- Key: UnixGroupIDs
	- Value type: ARRAY of UINT32
	- Value: POSIX 定義的數值型 Unix group IDs（包含 primary group 與 supplementary groups），並依數值排序。此 array 不是完整就會缺席（absent）：若 message bus 能判定部分但非全部 groups，或其中某個 group 無法表示為 UINT32，就不得把此 credential 加入 dictionary。
- Key: ProcessFD
	- Value type: UNIX_FD
	- Value: 在具有此概念的 platforms 上，用於 pinning 該 process 的 file descriptor。在 Linux 上，SO_PEERPIDFD socket option 是合適的實作。相較於 ProcessID，用此 FD 識別 process 更安全：ProcessID 可能遭到重用（re-use）攻擊，而 FD 不能被回收（recycled）。若原始 process 已不存在，FD 將無法再被解析（resolvable）。
- Key: ProcessID
	- Value type: UINT32
	- Value: 在具有此概念的 platforms 上的數值型 process ID。在 Unix 上，這是 POSIX 定義的 process ID。
- Key: WindowsSID
	- Value type: STRING
	- Value: Windows security identifier 的字串形式，例如 domain 或本機電腦使用者的 "S-1-5-21-3623811015-3361044348-30300820-1013"，或 LOCAL_SYSTEM 使用者的 "S-1-5-18"
- Key: LinuxSecurityLabel
	- Value type: ARRAY of BYTE
	- Value: 在 Linux 系統上，會由 SO*PEERSEC getsockopt 呼叫得到的 security label。此 array 包含 security label 的非零 bytes（採用未指定的 ASCII 相容編碼[a]），再加上一個零 byte。例：SELinux context `system_u:system_r:init_t:s0`（長度 27 的字串）會被編碼為 28 bytes，尾端為 ':', 's', '0', '\x00'。[b] 在 SELinux 系統上，這就是 SELinux context（由 ps -Z 或 ls -Z 輸出）。典型值可能包含 system_u:system_r:init_t:s0、unconfined_u:unconfined_r:unconfined_t:s0-s0:c0.c1023、或 unconfined_u:unconfined_r:chrome_sandbox_t:s0-s0:c0.c1023。在 Smack 系統上，這是 Smack label，典型值可能包含 *、\*、User、System 或 System::Shared。在 AppArmor 系統上，這是 AppArmor context，一個複合字串，編碼 AppArmor label（一個或多個 profiles）以及 enforcement mode。典型值可能包含 unconfined、/usr/bin/firefox (enforce) 或 user1 (complain)。
- Key: [a] 它可能是 ASCII 或 UTF-8，但也可能是 ISO Latin-1 或其他編碼。[b] 注意這與較舊的 GetConnectionSELinuxContext method 不同，後者不會附加 zero byte。總是附加 zero byte 可讓呼叫者在不複製（copying）的情況下，直接從 message payload 讀取字串。
	- Value type:
	- Value:

此 method 在 D-Bus 1.7 中加入，以減少列出某 process credentials 所需的 round-trips。在較舊版本中，呼叫此 method 會失敗；想支援過時 message bus versions 的 applications 可以改用獨立 methods，例如
[GetConnectionUnixUser](#bus-messages-get-connection-unix-user "Method: org.freedesktop.DBus.GetConnectionUnixUser")。

#### Method: `org.freedesktop.DBus.GetAdtAuditSessionData`

As a method:

```
						ARRAY of BYTE GetAdtAuditSessionData (in STRING bus_name)

```

Message arguments:

- Argument: 0
	- Type: STRING
	- Description: 要查詢的 connection 的 Unique 或 well-known bus name，例如 :12.34 或 com.example.tea

Reply arguments:

| Argument | Type          | Description                                            |
| -------- | ------------- | ------------------------------------------------------ |
| 0        | ARRAY of BYTE | auditing data as returned by adt_export_session_data() |

回傳 Solaris ADT 使用的 auditing data，採用未指定的 binary 格式。如果你知道這代表什麼，請透過 D-Bus bug tracking system 貢獻文件。此 method 出現在核心 DBus 介面是出於歷史原因；未來應透過
[GetConnectionCredentials](#bus-messages-get-connection-credentials "Method: org.freedesktop.DBus.GetConnectionCredentials")
method 來提供相同資訊。

#### Method: `org.freedesktop.DBus.GetConnectionSELinuxSecurityContext`

As a method:

```
						ARRAY of BYTE GetConnectionSELinuxSecurityContext (in STRING bus_name)

```

Message arguments:

- Argument: 0
	- Type: STRING
	- Description: 要查詢的 connection 的 Unique 或 well-known bus name，例如 :12.34 或 com.example.tea

Reply arguments:

- Argument: 0
	- Type: ARRAY of BYTE
	- Description: 某種位元組字串，不一定是 UTF-8，且不包含 '\0'

回傳 SELinux 使用的 security context，格式未指定。如果你知道這代表什麼，請透過 D-Bus bug tracking system 貢獻文件。此 method 出現在核心 DBus 介面是出於歷史原因；未來應透過
[GetConnectionCredentials](#bus-messages-get-connection-credentials "Method: org.freedesktop.DBus.GetConnectionCredentials")
method 來提供相同資訊。

#### Method: `org.freedesktop.DBus.AddMatch`

As a method:

```
						AddMatch (in STRING rule)

```

Message arguments:

| Argument | Type   | Description                         |
| -------- | ------ | ----------------------------------- |
| 0        | STRING | Match rule to add to the connection |

新增一條 match rule，用於匹配穿越 message bus 的 messages（見
[“Match Rules”](#message-bus-routing-match-rules "Match Rules")）。
若 bus 資源不足，會回傳 `org.freedesktop.DBus.Error.OOM` error。

#### Method: `org.freedesktop.DBus.RemoveMatch`

As a method:

```
						RemoveMatch (in STRING rule)

```

Message arguments:

| Argument | Type   | Description                              |
| -------- | ------ | ---------------------------------------- |
| 0        | STRING | Match rule to remove from the connection |

移除第一條匹配（matches）的規則（見
[“Match Rules”](#message-bus-routing-match-rules "Match Rules")）。
若找不到該規則，回傳 `org.freedesktop.DBus.Error.MatchRuleNotFound` error。

#### Method: `org.freedesktop.DBus.GetId`

As a method:

```
						GetId (out STRING id)

```

Reply arguments:

| Argument | Type   | Description                          |
| -------- | ------ | ------------------------------------ |
| 0        | STRING | Unique ID identifying the bus daemon |

取得 bus 的 unique ID。此處的 unique ID 由 bus daemon 在其 listen 的所有 addresses（TCP、UNIX domain socket 等）之間共用，其格式見
[“UUIDs”](#uuids "UUIDs")。
bus 所 listen 的每個 address 也各自有其 unique ID，見
[“Server Addresses”](#addresses "Server Addresses")。
per-bus 與 per-address IDs 無關。另有一個 per-machine ID，見
[“`org.freedesktop.DBus.Peer`”](#standard-interfaces-peer "org.freedesktop.DBus.Peer")
且由 org.freedesktop.DBus.Peer.GetMachineId() 回傳。對 desktop session bus 而言，bus ID 可作為唯一識別使用者 session 的方法。

#### Property: `org.freedesktop.DBus.Features`

As a property:

```
						Read-only constant ARRAY of STRING Features

```

此 property 列出 message bus 提供的抽象 “features”，可供 clients 偵測其所通訊之 message bus 的能力。此 property 在 message bus 的 reference implementation 的 1.11.x 版本中加入。與所有 properties 相同，它透過標準
[Properties](#standard-interfaces-properties "org.freedesktop.DBus.Properties")
介面的 method calls 存取。

回傳 array 中不包含 “.” 的項目由本規格定義。希望宣告此文件未提及之 features 的 bus daemon implementors，應提出 patch 來更新本規格，或使用包含 “.” 且以其自身反轉網域名稱開頭的 keys，例如 `com.example.MyBus.SubliminalMessages`。

本規格目前定義的 features 如下：

`ActivatableServicesChanged`

此 message bus 會在其可被啟動 services 清單可能變更時，送出 `ActivatableServicesChanged` signal（詳見
[“Signal: `org.freedesktop.DBus.ActivatableServicesChanged`”](#bus-messages-activatable-services-changed "Signal: org.freedesktop.DBus.ActivatableServicesChanged")）。

`AppArmor`

此 message bus 透過 [AppArmor](http://wiki.apparmor.net/) 安全框架過濾 messages。只有在 AppArmor mediation 於 runtime 啟用且有效時，才應宣告此 feature；僅在編譯時加入 AppArmor 支援，不應使得在該 bus instance 因 bus 或 OS 設定而禁用 AppArmor 時仍宣告此 feature。

`HeaderFiltering`

此 message bus 保證在 relay messages 時，會移除它不理解的 header fields，讓 client 在接收一個「最近定義且規格指定應由 message bus 控制」的 header field 時，能安全假設該 header field 確實是由 message bus 設定。需要此檢查是因為較舊 message bus implementations 不保證會以此方式過濾 headers，因此惡意 client 可能透過不理解該 header field 的舊版 message bus，送出任意最近定義的 header field 並夾帶其自行構造（crafted）的值。

`SELinux`

此 message bus 透過 [SELinux](https://selinuxproject.org/) 安全框架過濾 messages。與 `AppArmor` 類似，只有在 SELinux mediation 於 runtime 啟用且有效時才應宣告此 feature（若 SELinux 置於 permissive mode，仍視為 active）。

`SystemdActivation`

當被要求啟動一個其 `.service` 檔包含 `SystemdService` 欄位的 service 時，此 message bus 會執行 systemd activation（詳見
[“systemd Activation”](#message-bus-starting-services-systemd "systemd Activation")）。

#### Property: `org.freedesktop.DBus.Interfaces`

As a property:

```
						Read-only constant ARRAY of STRING Interfaces

```

此 property 列出 `/org/freedesktop/DBus` object 提供的 interfaces，可供 clients 偵測其所通訊之 message bus 的能力。不同於標準 Introspectable 介面，查詢此 property 不需要解析 XML。此 property 在 message bus 的 reference implementation 的 1.11.x 版本中加入。與所有 properties 相同，它透過標準
[Properties](#standard-interfaces-properties "org.freedesktop.DBus.Properties")
介面的 method calls 存取。

標準 `org.freedesktop.DBus` 與 `org.freedesktop.DBus.Properties` 介面不包含在此 property 的值中，因為它們的存在可由以下事實推得：對 `org.freedesktop.DBus.Properties` 的 method call 請求 `org.freedesktop.DBus` 的 properties 成功了。標準 `org.freedesktop.DBus.Peer` 與 `org.freedesktop.DBus.Introspectable` 介面也不包含在此 property 的值中，因為它們不表示 message bus implementation 的 features。

### Message Bus Introspection

message bus 應實作標準
[Introspectable](#standard-interfaces-introspectable "org.freedesktop.DBus.Introspectable")
介面。

### Message Bus as a Peer

message bus 應實作標準
[Peer](#standard-interfaces-peer "org.freedesktop.DBus.Peer")
介面。Peer 介面的支援在 message bus 的 reference implementation 的 1.11.x 版本中加入。

### Message Bus Properties

message bus 應在 object path `/org/freedesktop/DBus` 上實作標準
[Properties](#standard-interfaces-properties "org.freedesktop.DBus.Properties")
介面。應提供的具體 properties 會在其各自 interfaces 的文件中描述。Properties 介面的支援在 message bus 的 reference implementation 的 1.11.x 版本中加入。

### Monitoring 介面：`org.freedesktop.DBus.Monitoring`

特殊 message bus name `org.freedesktop.DBus` 可以選擇性地在 object path `/org/freedesktop/DBus` 上實作 `org.freedesktop.DBus.Monitoring` 介面。

#### Method: `org.freedesktop.DBus.Monitoring.BecomeMonitor`

As a method:

```
						BecomeMonitor (in ARRAY of STRING rule, in UINT32 flags)

```

Message arguments:

| Argument | Type            | Description                          |
| -------- | --------------- | ------------------------------------ |
| 0        | ARRAY of STRING | Match rules to add to the connection |
| 1        | UINT32          | Not used, must be 0                  |

將該 connection 轉換為 _monitor connection_，可用作除錯/監控工具。只有在此 bus 上具備特權（privileged；由某個 implementation-specific 定義決定）的使用者，才可以建立 monitor connections\[\[4\]\](#ftn.id-1.13.11.3.3.2)。

monitor connections 會失去其所有 bus names（包含 unique connection name）與所有 match rules。禁止在 monitor connection 上送出 messages：applications 應使用私有連線（private connection）來進行監控。

monitor connections 可以接收所有 messages，甚至包含原本應只送往其他 connection 的 messages（“eavesdropping”）。第一個引數是一個 match rules 清單，它會取代此 connection 先前所有生效的 match rules。這些 match rules 一律被視為包含特殊的 `eavesdrop='true'` 成員。

作為特例，若 match rules 清單為空（原本會匹配不到任何內容，使 monitor 沒有意義），則會被視為匹配所有 messages 的縮寫（shorthand）。

第二個引數未來可能用作 flags，以影響後續 D-Bus 版本中 monitor connection 的行為。

message bus implementations 應嘗試將監控帶來的副作用（side-effects）降到最低——特別是，與一般的 eavesdropping 不同，監控 system bus 不需要放寬 access control rules，從而不會改變原本可被投遞到（非 monitor）目的地的 messages 集合。然而不可避免的是，監控會增加 message bus 的資源消耗。在某些邊界情況（edge cases）中，若在未監控時時間或記憶體剛好足夠，啟用監控後可能導致某些原本會成功的 message 投遞失敗。

### 除錯統計介面：`org.freedesktop.DBus.Debug.Stats`（Debug Statistics Interface）

特殊 message bus name `org.freedesktop.DBus` 可以選擇性地在 object path `/org/freedesktop/DBus` 上實作 `org.freedesktop.DBus.Debug.Stats` 介面。此介面提供的統計資訊可用於調查效能瓶頸（performance bottlenecks）。

在 reference implementation 中，此介面是一個可選 feature，可於編譯期（compile-time）啟用或停用。在 well-known system bus 或其他服務多使用者的 buses 上，此介面的存取通常應限制為管理者使用者（administrative users），但如有需要可透過設定開放給開發者。

#### Method: `org.freedesktop.DBus.Debug.Stats.GetStats`

As a method:

```
						GetStats (out ARRAY of DICT_ENTRY<STRING,VARIANT> stats)

```

Message arguments:

| Argument | Type                                | Description |
| -------- | ----------------------------------- | ----------- |
| 0        | ARRAY of DICT_ENTRY<STRING,VARIANT> | Statistics  |

取得關於 message bus 本身的統計資訊。

結果 dictionary 中下列 keys 由本規格定義：

- Key: Serial
	- Value type: UINT32
	- Value: 每次呼叫 GetStats method 都會遞增的序號（serial number）。
- Key: ActiveConnections
	- Value type: UINT32
	- Value: 目前由此 message bus 處理的 active connections 數量。active connection 的確切意義由實作定義：在 reference dbus-daemon 中，一個 connection 在成功呼叫 Hello method 後被視為 active。
- Key: IncompleteConnections
	- Value type: UINT32
	- Value: 目前由此 message bus 處理的 incomplete connections 數量。incomplete connection 的確切意義由實作定義：在 reference dbus-daemon 中，一個 connection 若仍在進行 SASL handshake，或尚未成功呼叫 Hello method，便被視為 incomplete。
- Key: MatchRules
	- Value type: UINT32
	- Value: 目前正在使用中的 match rules 的總數。
- Key: PeakMatchRules
	- Value type: UINT32
	- Value: 曾經同時使用中的 match rules 的最大總數。
- Key: PeakMatchRulesPerConnection
	- Value type: UINT32
	- Value: 曾經在單一 connection 上同時使用中的 match rules 的最大總數。
- Key: BusNames
	- Value type: UINT32
	- Value: 目前所有 connections 正在擁有的 unique 或 well-known bus names 的總數。
- Key: PeakBusNames
	- Value type: UINT32
	- Value: 曾經由所有 connections 擁有的 bus names 的最大總數。
- Key: PeakBusNamesPerConnection
	- Value type: UINT32
	- Value: 曾經由任一單一 connection 擁有的 bus names 的最大總數。

除非在本規格中被標準化，所有其他 keys 都是 implementation-specific。reference dbus-daemon 還提供額外 keys：`ListMemPoolUsedBytes`、`ListMemPoolCachedBytes`、`ListMemPoolAllocatedBytes`（其值型別皆為 UINT32），用於描述 libdbus 記憶體管理的實作細節。

#### Method: `org.freedesktop.DBus.Debug.Stats.GetConnectionStats`

As a method:

```
						GetConnectionStats (in STRING connection, out ARRAY of DICT_ENTRY<STRING,VARIANT> stats)

```

Message arguments:

| Argument | Type                                | Description                               |
| -------- | ----------------------------------- | ----------------------------------------- |
| 0        | STRING                              | Unique or well-known name of a connection |
| 1        | ARRAY of DICT_ENTRY<STRING,VARIANT> | Statistics                                |

取得某個 connection 的統計資訊；該 connection 以其 unique connection name，或以其為 primary owner 的任一 well-known bus name 來識別。此 method 對 message bus `org.freedesktop.DBus` 本身沒有意義。

結果 dictionary 中下列 keys 由本規格定義：

- Key: Serial
	- Value type: UINT32
	- Value: 每次呼叫 GetConnectionStats method 都會遞增的序號。
- Key: UniqueName
	- Value type: STRING
	- Value: 該 connection 的 unique connection name。若 GetConnectionStats 的第一個參數本來就是 unique name，則此值與該 unique name 相同；若第一個參數是 well-known name，則此值等同於對該 well-known name 呼叫 GetNameOwner 的結果。
- Key: MatchRules
	- Value type: UINT32
	- Value: 目前該 connection 正在使用中的 match rules 總數。
- Key: PeakMatchRules
	- Value type: UINT32
	- Value: 曾經在該 connection 上同時使用中的 match rules 的最大總數。
- Key: BusNames
	- Value type: UINT32
	- Value: 目前該 connection 正在擁有的 bus names 總數。
- Key: PeakBusNames
	- Value type: UINT32
	- Value: 曾經由該 connection 擁有的 bus names 的最大總數。
- Key: IncomingMessages
	- Value type: UINT32
	- Value: message bus 中「已從該 connection 收到、但尚未 dispatch」的 queued messages 總數。
- Key: IncomingBytes
	- Value type: UINT32
	- Value: incoming messages 的總位元組數。
- Key: IncomingFDs
	- Value type: UINT32
	- Value: 附加在 incoming messages 上的 Unix file descriptors 總數。
- Key: PeakIncomingBytes
	- Value type: UINT32
	- Value: 曾經在任何時間點，incoming messages 的總位元組數的最高值。
- Key: PeakIncomingFDs
	- Value type: UINT32
	- Value: 曾經在任何時間點，附加在 incoming messages 上的 Unix file descriptors 總數的最高值。
- Key: OutgoingMessages
	- Value type: UINT32
	- Value: message bus 中「排隊等待投遞到該 connection」的 queued messages 總數。
- Key: OutgoingBytes
	- Value type: UINT32
	- Value: outgoing messages 的總位元組數。
- Key: OutgoingFDs
	- Value type: UINT32
	- Value: 附加在 outgoing messages 上的 Unix file descriptors 總數。
- Key: PeakOutgoingBytes
	- Value type: UINT32
	- Value: 曾經在任何時間點，outgoing messages 的總位元組數的最高值。
- Key: PeakOutgoingFDs
	- Value type: UINT32
	- Value: 曾經在任何時間點，附加在 outgoing messages 上的 Unix file descriptors 總數的最高值。

除非在本規格中被標準化，所有其他 keys 都是 implementation-specific。

#### Method: `org.freedesktop.DBus.Debug.Stats.GetAllMatchRules`

As a method:

```
						GetAllMatchRules (out ARRAY of DICT_ENTRY<STRING,ARRAY<STRING>> rules)

```

Message arguments:

| Argument | Type                                      | Description |
| -------- | ----------------------------------------- | ----------- |
| 0        | ARRAY of DICT_ENTRY<STRING,ARRAY<STRING>> | Match rules |

列出此 message bus 上所有生效中的 match rules。結果 dictionary 的 keys 是 unique connection names；values 是該 connection 註冊（registered）的 match rules 清單，順序未指定。若某 connection 將同一條 match rule 註冊多次，清單中是否出現重複項目未指定。

### Verbose 介面：`org.freedesktop.DBus.Verbose`

特殊 message bus name `org.freedesktop.DBus` 可以選擇性地在 object path `/org/freedesktop/DBus` 上實作 `org.freedesktop.DBus.Verbose` 介面。在 reference implementation 中，此介面是一個可選 feature，可於編譯期啟用或停用。在 well-known system bus 或其他服務多使用者的 buses 上，此介面的存取通常應限制為管理者使用者，但如有需要可透過設定開放給開發者。

#### Method: `org.freedesktop.DBus.Verbose.EnableVerbose`

As a method:

```
						EnableVerbose ()

```

以 implementation-specific 的方式開始產生 verbose 除錯訊息。例如，這些訊息可能會輸出到標準錯誤（standard error）或系統事件記錄（system event log）。

#### Method: `org.freedesktop.DBus.Verbose.DisableVerbose`

As a method:

```
						DisableVerbose ()

```

停止產生 verbose 除錯訊息。

## Glossary

此 glossary 定義本規格中使用的一些術語。

Bus Name

message bus 會維護 names 與 connections 之間的關聯（association）。（通常每個 application 對應一個 connection。）bus name 只是用來定位 connections 的識別碼（identifier）。例如，假想的 `com.yoyodyne.Screensaver` name 可能用於從 Yoyodyne Corporation 的螢幕保護程式發送或接收 message。若 message bus 已將該 application 的 connection 與該 name 關聯起來，就稱該 application _擁有（own）_ 此 name。names 也可能具有 _queued owners_（見
[Queued Name Owner](#term-queued-owner "Queued Name Owner")）。bus 會為每個 connection 指派一個 unique name，見
[Unique Connection Name](#term-unique-name "Unique Connection Name")。
其他 names 可視為 “well-known names”，並用於尋找提供特定功能的 applications。

關於 bus names 的語法與命名慣例，見
[“Bus names”](#message-protocol-names-bus "Bus names")。

Message

message 是透過 D-Bus protocol 通訊的最小（atomic）單位。它由 _header_ 與 _body_ 組成；body 由 _arguments_ 構成。

Message Bus

message bus 是一個特殊的 application，會在連到 message bus 的一群 applications 之間轉送或路由（route）messages。它也管理用於路由 messages 的 _names_。

Name

見
[Bus Name](#term-bus-name "Bus Name")。
“Name” 也可能被用來指涉 D-Bus 中的一些其他 names，例如 interface names。

Namespace

用於避免在定義新 interfaces、bus names 等時發生 collisions。所使用的慣例與 Java 用於定義 classes 的方式相同：反轉網域名稱（reversed domain name）。見
[“Bus names”](#message-protocol-names-bus "Bus names")、
[“Interface names”](#message-protocol-names-interface "Interface names")、
[“Error names”](#message-protocol-names-error "Error names")、
[“Valid Object Paths”](#message-protocol-marshaling-object-path "Valid Object Paths")。

Object

每個 application 都包含 _objects_，它們具有 _interfaces_ 與 _methods_。objects 以一個名稱（稱為 _path_）被引用。

One-to-One

application 直接與另一個 application 通訊，不透過 message bus。one-to-one connections 可能是 “peer to peer” 或 “client to server”。在連線完成 authentication 之後，D-Bus protocol 不再具有 client vs. server 的概念；messages 流動是對稱的（symmetrical，full duplex）。

Path

D-Bus 中的 object references（object names）以檔案系統風格的階層（filesystem-style hierarchy）組織，因此每個 object 以一個 path 命名。如同 LDAP，沒有 “files” 與 “directories” 的差別；path 可以指向一個 object，同時仍能在其下有子 objects。

Queued Name Owner

每個 bus name 都有 primary owner；送往該 name 的 messages 會投遞給 primary owner。然而某些 names 也維護一個 secondary owners 的佇列（queue），它們在旁等待（“waiting in the wings.”）。如果 primary owner 釋放該 name，佇列中的第一個 secondary owner 會自動成為該 name 的新 owner。

Service

service 是一個可由 bus daemon 啟動的 executable。services 通常保證某些特定特性，例如它們可能保證會請求某個特定 name（例如 "com.example.Screensaver1"）、有一個 singleton object "/com/example/Screensaver1"，且該 object 會實作介面 "com.example.Screensaver1.Control"。

Service Description Files

".service files" 告訴 bus 哪些 service applications 可以被啟動（見
[Service](#term-service "Service")）。最重要的是，它們提供從 bus names 到 services 的映射（mapping）；那些 services 在啟動時會請求那些 names。

Unique Connection Name

由 message bus 自動指派給每個 connection 的特殊 name。此 name 永遠不會更換 owner，且會是唯一的（在 message bus 的生命週期中永不重用）。它會以 ':' 字元開頭。

