typedef struct _MI_WSLE
{
  union // _TAG_UNNAMED_237
  {
    union
    {
      struct // _TAG_UNNAMED_238
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned char Age : 4; /* bit position: 0 */
          /* 0x0000 */ unsigned char Protection : 3; /* bit position: 4 */
          /* 0x0000 */ unsigned char Reserved : 1; /* bit position: 7 */
        }; /* bitfield */
      } /* size: 0x0001 */ e1;
      struct // _TAG_UNNAMED_239
      {
        /* 0x0000 */ unsigned char EntireWsle;
      } /* size: 0x0001 */ e2;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ u1;
} MI_WSLE, *PMI_WSLE; /* size: 0x0001 */

