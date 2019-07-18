# T1ny_bl0om - Elettronics

## Getting Started

### Requisites
It's important to have the right hardware for the job, so this is mine:
- Soldering iron, mine is a Weller WHS 40
- Soldering station, mine is [this one](https://www.aliexpress.com/item/32817153181.html?spm=a2g0s.9042311.0.0.27424c4d8S5X5Y) Set E, that had a soldering iron and solder past
- Solder past, [mine](https://www.aliexpress.com/item/32623418957.html?spm=a2g0s.9042311.0.0.27424c4d8S5X5Y) but the one that came with the soldering station works fine
- Flux paste, [mine](https://www.aliexpress.com/item/32331668231.html?spm=a2g0s.9042311.0.0.27424c4dDTmYnn) and works fine
- Soldering fume extractor, [this](https://www.youtube.com/watch?v=gNbNKMQhCOQ) is very articuleted but it's important to have a kind of a extractor to evacuate the soldering fume

The following instractions is divide in two part:
- ISP
- T1ny_bl0om

If you have a flasher you can skip the ISP part and go straight to the T1ny_bl0om part.

### ISP

#### Build of Materials
<img align="right" width="250" height="250" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/photo_2019-07-18_10-05-11.jpg">In this part you need:
- An arduino nano [link](https://www.aliexpress.com/item/32341832857.html?spm=a2g0s.9042311.0.0.27424c4diAN1ap)
- A 10 μF capacitor, here you have a set of those [link](https://www.aliexpress.com/item/32866006892.html?spm=a2g0o.productlist.0.0.59a8181buVlWT5&algo_pvid=d772c5c8-fa64-40fe-81dd-571abab0b6f3&algo_expid=d772c5c8-fa64-40fe-81dd-571abab0b6f3-1&btsid=62429975-cd1c-4d59-b215-f225cd1a05c2&ws_ab_test=searchweb0_0%2Csearchweb201602_8%2Csearchweb201603_52)
- A 5mm led or similar [link](https://lcsc.com/product-detail/Light-Emitting-Diodes-LED_f5Short-legs-Round-with-edge-Super-bright-red-hair-red-Bagged-RHOS_C52721.html)
- A pcb, if you want you can upload directly the file *ISP/Flasher.zip* to [jlcpcb](https://jlcpcb.com/quote) or where do you want, I design the pcb with [EasyEDA](https://easyeda.com/) so if you want to modify it you can import the __*.json__ file inside EasyEDA
- A program clam [link](https://www.aliexpress.com/item/1902568501.html?spm=a2g0s.9042311.0.0.27424c4dFCbfAZ)
- Some pin [link](https://www.aliexpress.com/item/32933682566.html?spm=a2g0o.productlist.0.0.5861aafb0Lzcu7&algo_pvid=395d35a2-14b8-4aa8-b148-d58824a5238f&algo_expid=395d35a2-14b8-4aa8-b148-d58824a5238f-9&btsid=77c1d013-cb10-408f-9189-24a4d940a41c&ws_ab_test=searchweb0_0%2Csearchweb201602_8%2Csearchweb201603_52)

#### Steps
It's basically soldiring at this point:
1. Solder the pin,led and capacitor to the board
2. Solder the pin to arduino nano
3. **Upload to the arduino the ISP sketch**
4. Solder arduino to the pcb

Complete :tada::tada::tada:

Now it's time for the tiny.

### T1ny_bl0om

#### Build of Materials
<img align="right" width="250" height="250" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/photo_2019-07-18_10-40-03.jpg">I order some part from LCSC and other form Aliexpress feel free to place the order where do you want, down below there is the list of all the mandatory component to complete **one** T1ny_bl0om:
- 1  pcb, if you want you can upload directly the file *T1ny_bl0om/T1ny_bl0om.zip* to [jlcpcb](https://jlcpcb.com/quote) or where do you want, I design the pcb with [EasyEDA](https://easyeda.com/) so if you want to modify it you can import the __*.json__ file inside EasyEDA
- 1 Attiny85 [link](https://lcsc.com/product-detail/FLASH_ATMEL_ATTINY85-20SU_ATTINY85-20SU_C89852.html)
- 3 WS2812B [link](https://www.aliexpress.com/item/32453497583.html?spm=a2g0s.9042311.0.0.27424c4d9DvwKP)
- 3 YAGEO CC0603KRX7R9BB104 [link](https://lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_100nF-104-10-50V_C14663.html)
- 1 Diodes MMSZ5233B-7-F [link](https://lcsc.com/product-detail/Zener-Diodes_DIODES_MMSZ5233B-7-F_MMSZ5233B-7-F_C151381.html)
- 2 pieces of wire to 'hug' the battery, one 20mm an the other 15mm
- Some copper stripes to enlarge the contact area, I used the one that came with the soldering station and works well

BTW I had uploaded the component list (*T1ny_bl0om\tiny_bloom_.csv*) in case you have problems.

#### Steps
<img align="right" width="250" height="250" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/photo_2019-07-17_12-12-55.jpg">So first I soldered first the top part (the one with led and capacitors) according to the scheme, and after that I soldered the bottom part (the one with attiny and zener diode).

The whole process is a bit bothersome due to the size of the SMD component but the final result :smile:


In case you have any problems feel free to contact me on [Twitter](https://twitter.com/raffass).



<img src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/yop.gif" width="50">
