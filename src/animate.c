/*
  Zachary Gilmartin
  Monday, February 24, 2014

  about: this is a set of funcitons for animating
*/

#include <stdio.h>
#include <stdbool.h>
  
//a helper function to move console cursor back
void move_cursor_back(int animation_time)
{
  fflush(stdout);
  usleep(animation_time);
  printf("\033[40A");
}

//animating a caracter
void animate()
{
  bool is_done = false;
  int animation_time = 300000;
  printf("\033[2J");
  
  do
  {
    printf("                                                                                             \n"
    "                                     ,+Z8DDNNNDOZ7~                                                 \n"
    "                                 +8DNNNNNNNNNNNNNNNNN8I,                                            \n"
    "                              =D8MNNNNNNNNNNNMNMNNNNNNNND=                                          \n"
    "                            ~ONNNNNNNNNNNNNNNMNNMMNNNNNNNN8:                                        \n"
    "                           +DNNMNNNDO$$$ZOO8DDNNNNNNNNNNNNNNI                                       \n"
    "                          +8NNMMNOI???II777$ZZZOOO88O88DNNNNN$                                      \n"
    "                         :DNNMND$I++?++?I7$$$ZZZZOOOOZZZZONNNDI                                     \n"
    "                         ~8ONMNZ?+++++?II7$ZOOOOOOOZOZZ$$$8DDDO                                     \n"
    "                          78DNN7+===------I$ZZOO------$Z$$ZDDD~                                     \n"
    "                          =8DN8=~=+|      |----|      |DOZ$OD~                                      \n"
    "                           ,I?I~:=+?------DDDOOZ------N8OOZZ:                                       \n"
    "                            ,?+::~=+?7ZO888OZ7I$OO8NNNNNDOZ7:                                       \n"
    "                             ::::~~~=?IZOOOOIIIIOOONNNNNNDO$~                                       \n"
    "                              ,::~==?7Z8D8$II77$8DNNNNNNNN8$:                                       \n"
    "                              ,~==?II$OD888III$88DNNNNNNNDO7                                        \n"
    "                               =+??III$7III?77Z88DDDDNNND8Z:                                        \n"
    "                               :+??II777???II7ZO88888O8887   =?,                                    \n"
    "                               ,=??IIII7I???I7$Z8DDDDDDDD7   :?I$I+~                                \n"
    "                               .=??IIII777777ZO8DDNNNNNDDI   ~I=$7II+                               \n"
    "                          ..=$I$Z$?III77$$$ZZO88DNNNNDDN8$7I7+$???++:                               \n"
    "                          $$7I+==?I???II7$ZZZ88DDNNNNNO+==~=+?7?=~~~                                \n"
    "                         ++7I$I?I$II=++?+?I$$$$$?I$II+~~++~=+II7?~~~                                \n"
    "                        ?I+=+$Z77$I$=~===+=??++==:~==?=:~~+??II$?~~=+                               \n"
    "                       =I==?I$$~=II==::~:~+II?~?II?IZ7+===++~$?7+~~=+?                              \n"
    "                       +I?I$?+I+7I=7ZI=~=~~=++==7OO=+?==+7???III==~=?~                              \n"
    "                        ,OII$I$++$Z7?II+++?+?++++=+===+?=I7=?==I?=~=+~                              \n"
    "                        :O7?I=$====??I7?+IIII++IZ$I+????+++=++?=+===:                               \n"
    "                         $$I+:+?II$$====~===+$Z$$ZII+~~~=++77:                                      \n"
    "                         ?Z?..ZO$Z7$+~~=~+==?==~~~==++~::~??++                                      \n"
    "                         ~O7I=I~=IZ+++~:~=+IZ??$$??ZZI==~==+=I                                      \n"
    "                          OO?I7+$ZI?Z87?+=======$8$III++I?II+I,                                     \n"
    "                           +$77==?$O7III?IIII+++++=+??+?+=+?$Z,                                     \n"
    "                              ~???????7$II7$$?I$$OII??II77I+=:                                      \n"
    "                                +88888O888D8O8OO88OOOOOZZ$$7                                        \n"
    "                                IO8OOZZZZZOODM8DD8OOZ$$$$$7?                                        \n"
    "                                +OO8OZZOZOO8DD:.8DD88OZ$$$7~                                        \n"
    "                                =O88OOOOO88DDD+.=888888OZ$$7                                        \n"
    "                                :88OO8DDDDNNNNO,:DNDD8888OZI                                        \n"
    "                           :Z8ZO8DDNNNMMMMMMN$   ,DNNNDDD8Z+,                                       \n"
    "                          ,IZODDDDDDNNNNN8O7=     =NNMNMMNNNDI                                      \n");
   
    move_cursor_back(animation_time);
    
    printf("                                                                                             \n"
    "                                     ,+Z8DDNNNDOZ7~                                                 \n"
    "                                 +8DNNNNNNNNNNNNNNNNN8I,                                            \n"
    "                              =D8MNNNNNNNNNNNMNMNNNNNNNND=                                          \n"
    "                            ~ONNNNNNNNNNNNNNNMNNMMNNNNNNNN8:                                        \n"
    "                           +DNNMNNNDO$$$ZOO8DDNNNNNNNNNNNNNNI                                       \n"
    "                          +8NNMMNOI???II777$ZZZOOO88O88DNNNNN$                                      \n"
    "                         :DNNMND$I++?++?I7$$$ZZZZOOOOZZZZONNNDI                                     \n"
    "                         ~8ONMNZ?+++++?II7$ZOOOOOOOZOZZ$$$8DDDO                                     \n"
    "                          78DNN7+===------I$ZZOO------$Z$$ZDDD~                                     \n"
    "                          =8DN8=~=+|      |----|      |DOZ$OD~           AH                         \n"
    "                           ,I?I~:=+?------DDDOOZ------N8OOZZ:                                       \n"
    "                            ,?+::~=+?7ZO888OZ7I$OO8NNNNNDOZ7:                                       \n"
    "                             ::::~~~=?IZOOOOIIIIOOONNNNNNDO$~                                       \n"
    "                              ,::~==?7Z8D8$II77$8DNNNNNNNN8$:                                       \n"
    "                              ,~==?II$OD888III$88DNNNNNNNDO7                                        \n"
    "                              ,~==?II$OD888I    8DNNNNNNNDO7                                        \n"
    "                               =+??III$7II       DDDDNNND8Z:    =?,                                 \n"
    "                               ,=??IIII7I???I7$Z8DDDDDDDD7      :?I$I+~.                            \n"
    "                               .=??IIII777777ZO8DDNNNNNDDI      ~I=$7II+                            \n"
    "                          ..=$I$Z$?III77$$$ZZO88DNNNNDDN8$7I7  +$???++:                             \n"
    "                          $$7I+==?I???II7$ZZZ88DDNNNNNO+==~=++  ?7?=~~~.                            \n"
    "                         ++7I$I?I$II=++?+?I$$$$$?I$II+~~++~=+++ II7?~~~.                            \n"
    "                        ?I+=+$Z77$I$=~===+=??++==:~==?=:~~+???III$?~~=+.                            \n"
    "                       =I==?I$$~=II==::~:~+II?~?II?IZ7+===++~~ $?7+~~=+?                            \n"
    "                       +I?I$?+I+7I=7ZI=~=~~=++==7OO=+?==+7????IIII==~=?~                            \n"
    "                        ,OII$I$++$Z7?II+++?+?++++=+===+?=I7=?===I?=~=+~.                            \n"
    "                        :O7?I=$====??I7?+IIII++IZ$I+????+++=+++?=+===:..                            \n"
    "                         $$I+:+?II$$====~===+$Z$$ZII+~~~=++77:                                      \n"
    "                         ?Z?..ZO$Z7$+~~=~+==?==~~~==++~::~??++                                      \n"
    "                         ~O7I=I~=IZ+++~:~=+IZ??$$??ZZI==~==+=I                                      \n"
    "                          OO?I7+$ZI?Z87?+=======$8$III++I?II+I,                                     \n"
    "                           +$77==?$O7III?IIII+++++=+??+?+=+?$Z,                                     \n"
    "                              ~???????7$II7$$?I$$OII??II77I+=:                                      \n"
    "                                +88888O888D8O8OO88OOOOOZZ$$7                                        \n"
    "                                IO8OOZZZZZOODM8DD8OOZ$$$$$7?                                        \n"
    "                                +OO8OZZOZOO8DD:.8DD88OZ$$$7~                                        \n"
    "                                =O88OOOOO88DDD+.=888888OZ$$7                                        \n"
    "                                :88OO8DDDDNNNNO,:DNDD8888OZI                                        \n"
    "                           :Z8ZO8DDNNNMMMMMMN$   ,DNNNDDD8Z+,                                       \n"
    "                          ,IZODDDDDDNNNNN8O7=     =NNMNMMNNNDI                                      \n");
    
    move_cursor_back(animation_time);
    
    printf("                                                                                             \n"
    "                                     ,+Z8DDNNNDOZ7~                                                 \n"
    "                                 +8DNNNNNNNNNNNNNNNNN8I,                                            \n"
    "                              =D8MNNNNNNNNNNNMNMNNNNNNNND=                                          \n"
    "                            ~ONNNNNNNNNNNNNNNMNNMMNNNNNNNN8:                                        \n"
    "                           +DNNMNNNDO$$$ZOO8DDNNNNNNNNNNNNNNI                                       \n"
    "                          +8NNMMNOI???II777$ZZZOOO88O88DNNNNN$                                      \n"
    "                         :DNNMND$I++?++?I7$$$ZZZZOOOOZZZZONNNDI                                     \n"
    "                         ~8ONMNZ?+++++?II7$ZOOOOOOOZOZZ$$$8DDDO                                     \n"
    "                          78DNN7+===------I$ZZOO------$Z$$ZDDD~                                     \n"
    "                          =8DN8=~=+|      |----|      |DOZ$OD~           AH-AH                      \n"
    "                           ,I?I~:=+?------DDDOOZ------N8OOZZ:                                       \n"
    "                            ,?+::~=+?7ZO888OZ7I$OO8NNNNNDOZ7:                                       \n"
    "                             ::::~~~=?IZOOOOIIIIOOONNNNNNDO$~                                       \n"
    "                              ,::~==?7Z8D8$II77$8DNNNNNNNN8$:                                       \n"
    "                              ,~==?II$OD88        NNNNNNNDO7                                        \n"
    "                              ,~==?II$OD8        8DNNNNNNNDO7                                       \n"
    "                               =+??III$7II       DDDDNNND8Z:     =?,                                 \n"
    "                               ,=??IIII7I???I7$Z8DDDDDDDD7       :?I$I+~.                            \n"
    "                               .=??IIII777777ZO8DDNNNNNDDI       ~I=$7II+                            \n"
    "                          ..=$I$Z$?III77$$$ZZO88DNNNNDDN8$7I7   +$???++:                            \n"
    "                          $$7I+==?I???II7$ZZZ88DDNNNNNO+==~=++   ?7?=~~~.                            \n"
    "                         ++7I$I?I$II=++?+?I$$$$$?I$II+~~++~=+++  II7?~~~.                            \n"
    "                        ?I+=+$Z77$I$=~===+=??++==:~==?=:~~+???III$?~~=+.                            \n"
    "                       =I==?I$$~=II==::~:~+II?~?II?IZ7+===++~~ $?7+~~=+?                            \n"
    "                       +I?I$?+I+7I=7ZI=~=~~=++==7OO=+?==+7????IIII==~=?~                            \n"
    "                        ,OII$I$++$Z7?II+++?+?++++=+===+?=I7=?===I?=~=+~.                            \n"
    "                        :O7?I=$====??I7?+IIII++IZ$I+????+++=+++?=+===:..                            \n"
    "                         $$I+:+?II$$====~===+$Z$$ZII+~~~=++77:                                      \n"
    "                         ?Z?..ZO$Z7$+~~=~+==?==~~~==++~::~??++                                      \n"
    "                         ~O7I=I~=IZ+++~:~=+IZ??$$??ZZI==~==+=I                                      \n"
    "                          OO?I7+$ZI?Z87?+=======$8$III++I?II+I,                                     \n"
    "                           +$77==?$O7III?IIII+++++=+??+?+=+?$Z,                                     \n"
    "                              ~???????7$II7$$?I$$OII??II77I+=:                                      \n"
    "                                +88888O888D8O8OO88OOOOOZZ$$7                                        \n"
    "                                IO8OOZZZZZOODM8DD8OOZ$$$$$7?                                        \n"
    "                                +OO8OZZOZOO8DD:.8DD88OZ$$$7~                                        \n"
    "                                =O88OOOOO88DDD+.=888888OZ$$7                                        \n"
    "                                :88OO8DDDDNNNNO,:DNDD8888OZI                                        \n"
    "                           :Z8ZO8DDNNNMMMMMMN$   ,DNNNDDD8Z+,                                       \n"
    "                          ,IZODDDDDDNNNNN8O7=     =NNMNMMNNNDI                                      \n");
    
    move_cursor_back(animation_time);
    
    printf("                                                                                             \n"
    "                                     ,+Z8DDNNNDOZ7~                                                 \n"
    "                                 +8DNNNNNNNNNNNNNNNNN8I,                                            \n"
    "                              =D8MNNNNNNNNNNNMNMNNNNNNNND=                                          \n"
    "                            ~ONNNNNNNNNNNNNNNMNNMMNNNNNNNN8:                                        \n"
    "                           +DNNMNNNDO$$$ZOO8DDNNNNNNNNNNNNNNI                                       \n"
    "                          +8NNMMNOI???II777$ZZZOOO88O88DNNNNN$                                      \n"
    "                         :DNNMND$I++?++?I7$$$ZZZZOOOOZZZZONNNDI                                     \n"
    "                         ~8ONMNZ?+++++?II7$ZOOOOOOOZOZZ$$$8DDDO                                     \n"
    "                          78DNN7+===------I$ZZOO------$Z$$ZDDD~                                     \n"
    "                          =8DN8=~=+|      |----|      |DOZ$OD~           AH-AH-AH                   \n"
    "                           ,I?I~:=+?------DDDOOZ------N8OOZZ:                                       \n"
    "                            ,?+::~=+?7ZO888OZ7I$OO8NNNNNDOZ7:                                       \n"
    "                             ::::~~~=?IZOOOOIIIIOOONNNNNNDO$~                                       \n"
    "                              ,::~==?7Z8D8$II77$8DNNNNNNNN8$:                                       \n"
    "                              ,~==?II$OD888III$88DNNNNNNNDO7                                        \n"
    "                              ,~==?II$OD888I    8DNNNNNNNDO7                                        \n"
    "                               =+??III$7II       DDDDNNND8Z:      =?,                               \n"
    "                               ,=??IIII7I???I7$Z8DDDDDDDD7        :?I$I+~.                          \n"
    "                               .=??IIII777777ZO8DDNNNNNDDI        ~I=$7II+                          \n"
    "                          ..=$I$Z$?III77$$$ZZO88DNNNNDDN8$7I7    +$???++:                          \n"
    "                          $$7I+==?I???II7$ZZZ88DDNNNNNO+==~=++    ?7?=~~~.                          \n"
    "                         ++7I$I?I$II=++?+?I$$$$$?I$II+~~++~=+++  II7?~~~.                           \n"
    "                        ?I+=+$Z77$I$=~===+=??++==:~==?=:~~+???II I$?~~=+.                           \n"
    "                       =I==?I$$~=II==::~:~+II?~?II?IZ7+===++~~ $?7+~~=+?                            \n"
    "                       +I?I$?+I+7I=7ZI=~=~~=++==7OO=+?==+7????IIII==~=?~                            \n"
    "                        ,OII$I$++$Z7?II+++?+?++++=+===+?=I7==?==I?=~=+~.                            \n"
    "                        :O7?I=$====??I7?+IIII++IZ$I+????+++=+++?=+===:..                            \n"
    "                         $$I+:+?II$$====~===+$Z$$ZII+~~~=++77:                                      \n"
    "                         ?Z?..ZO$Z7$+~~=~+==?==~~~==++~::~??++                                      \n"
    "                         ~O7I=I~=IZ+++~:~=+IZ??$$??ZZI==~==+=I                                      \n"
    "                          OO?I7+$ZI?Z87?+=======$8$III++I?II+I,                                     \n"
    "                           +$77==?$O7III?IIII+++++=+??+?+=+?$Z,                                     \n"
    "                              ~???????7$II7$$?I$$OII??II77I+=:                                      \n"
    "                                +88888O888D8O8OO88OOOOOZZ$$7                                        \n"
    "                                IO8OOZZZZZOODM8DD8OOZ$$$$$7?                                        \n"
    "                                +OO8OZZOZOO8DD:.8DD88OZ$$$7~                                        \n"
    "                                =O88OOOOO88DDD+.=888888OZ$$7                                        \n"
    "                                :88OO8DDDDNNNNO,:DNDD8888OZI                                        \n"
    "                           :Z8ZO8DDNNNMMMMMMN$   ,DNNNDDD8Z+,                                       \n"
    "                          ,IZODDDDDDNNNNN8O7=     =NNMNMMNNNDI                                      \n");
    
    move_cursor_back(animation_time);
    
    printf("                                                                                             \n"
    "                                     ,+Z8DDNNNDOZ7~                                                 \n"
    "                                 +8DNNNNNNNNNNNNNNNNN8I,                                            \n"
    "                              =D8MNNNNNNNNNNNMNMNNNNNNNND=                                          \n"
    "                            ~ONNNNNNNNNNNNNNNMNNMMNNNNNNNN8:                                        \n"
    "                           +DNNMNNNDO$$$ZOO8DDNNNNNNNNNNNNNNI                                       \n"
    "                          +8NNMMNOI???II777$ZZZOOO88O88DNNNNN$                                      \n"
    "                         :DNNMND$I++?++?I7$$$ZZZZOOOOZZZZONNNDI                                     \n"
    "                         ~8ONMNZ?+++++?II7$ZOOOOOOOZOZZ$$$8DDDO                                     \n"
    "                          78DNN7+===------I$ZZOO------$Z$$ZDDD~                                     \n"
    "                          =8DN8=~=+|      |----|      |DOZ$OD~                                      \n"
    "                           ,I?I~:=+?------DDDOOZ------N8OOZZ:       You did'n say the magic word    \n"
    "                            ,?+::~=+?7ZO888OZ7I$OO8NNNNNDOZ7:                                       \n"
    "                             ::::~~~=?IZOOOOIIIIOOONNNNNNDO$~                                       \n"
    "                              ,::~==?7Z8D8$II77$8DNNNNNNNN8$:                                       \n"
    "                              ,~==?II$OD888III$88DNNNNNNNDO7                                        \n"
    "                               =+??III$7III?77Z88DDDDNNND8Z:                                        \n"
    "                               :+??II777???II7ZO88888O8887     =?,                                  \n"
    "                               ,=??IIII7I???I7$Z8DDDDDDDD7     :?I$I+~                              \n"
    "                               .=??IIII777777ZO8DDNNNNNDDI     ~I=$7II+                             \n"
    "                          ..=$I$Z$?III77$$$ZZO88DNNNNDDN8$7I7  +$???++:                             \n"
    "                          $$7I+==?I???II7$ZZZ88DDNNNNNO+==~=+  ?7?=~~~                              \n"
    "                         ++7I$I?I$II=++?+?I$$$$$?I$II+~~++~=+  II7?~~~                              \n"
    "                        ?I+=+$Z77$I$=~===+=??++==:~==?=:~~+??I I$?~~=+                              \n"
    "                       =I==?I$$~=II==::~:~+II?~?II?IZ7+===++~$?7+~~=+?                              \n"
    "                       +I?I$?+I+7I=7ZI=~=~~=++==7OO=+?==+7???III==~=?~                              \n"
    "                        ,OII$I$++$Z7?II+++?+?++++=+===+?=I7=?==I?=~=+~                              \n"
    "                        :O7?I=$====??I7?+IIII++IZ$I+????+++=++?=+===:                               \n"
    "                         $$I+:+?II$$====~===+$Z$$ZII+~~~=++77:                                      \n"
    "                         ?Z?..ZO$Z7$+~~=~+==?==~~~==++~::~?=++                                      \n"
    "                         ~O7I=I~=IZ+++~:~=+IZ??$$??ZZI==~==+=I                                      \n"
    "                          OO?I7+$ZI?Z87?+=======$8$III++I?II+I,                                     \n"
    "                           +$77==?$O7III?IIII+++++=+??+?+=+?$Z,                                     \n"
    "                              ~???????7$II7$$?I$$OII??II77I+=:                                      \n"
    "                                +88888O888D8O8OO88OOOOOZZ$$7                                        \n"
    "                                IO8OOZZZZZOODM8DD8OOZ$$$$$7?                                        \n"
    "                                +OO8OZZOZOO8DD:.8DD88OZ$$$7~                                        \n"
    "                                =O88OOOOO88DDD+.=888888OZ$$7                                        \n"
    "                                :88OO8DDDDNNNNO,:DNDD8888OZI                                        \n"
    "                           :Z8ZO8DDNNNMMMMMMN$   ,DNNNDDD8Z+,                                       \n"
    "                          ,IZODDDDDDNNNNN8O7=     =NNMNMMNNNDI                                      \n");
    
    move_cursor_back(animation_time);
  
  }while(is_done == false);
  
}
