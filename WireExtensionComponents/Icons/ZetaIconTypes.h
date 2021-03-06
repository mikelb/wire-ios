// 
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
// 




typedef NS_ENUM(NSInteger, ZetaIconType)
{
    ZetaIconTypeNone                            = -1,
    ZetaIconTypePlus                            = 0x100,
    ZetaIconTypeMinus                           = 0x101,
    ZetaIconTypeCheckmark                       = 0x102,
    ZetaIconTypeX                               = 0x103,
    ZetaIconTypeElipsis                         = 0x125,
    ZetaIconTypeGear                            = 0x164,
    ZetaIconTypeEnvelope                        = 0x172,
    ZetaIconTypeLeftArrow                       = 0x108,
    ZetaIconTypeRightArrow                      = 0x109,
    ZetaIconTypeLeftCurveArrow                  = 0x114,
    ZetaIconTypeExclamationMark                 = 0x128,
    ZetaIconTypePhoto                           = 0x145,
    ZetaIconTypeSpeakerWithStrikethrough        = 0x156,
    ZetaIconTypeSpeaker                         = 0x158,
    ZetaIconTypeMicrophone                      = 0x159,
    ZetaIconTypeMicrophoneWithStrikethrough     = 0x160,
    ZetaIconTypeBell                            = 0x161,
    ZetaIconTypeBellWithStrikethrough           = 0x162,
    ZetaIconTypeChevronLeft                     = 0x110,
    ZetaIconTypeChevronRight                    = 0x111,
    ZetaIconTypePing                            = 0x137,
    ZetaIconTypeCallTransfer                    = 0x138,
    ZetaIconTypeCameraLens                      = 0x143,
    ZetaIconTypeCameraShutter                   = 0x144,
    ZetaIconTypeCameraSwitch                    = 0x120,
    ZetaIconTypeSpinner                         = 0x126, // The activity spinner
    ZetaIconTypeLocationPin                     = 0x148, // Placemarker
    ZetaIconTypeEye                             = 0x185,
    ZetaIconTypeTrash                           = 0x186,
    ZetaIconTypeDelete                          = 0x105,
    ZetaIconTypeBlock                           = 0x104,
    ZetaIconTypePerson                          = 0x142,
    ZetaIconTypeConversation                    = 0x150, // The text/conversation icon
    ZetaIconTypeDocument                        = 0x152,
    ZetaIconTypePaperclip                       = 0x154,
    ZetaIconTypePlay                            = 0x131,
    ZetaIconTypePause                           = 0x132,
    ZetaIconTypeClock                           = 0x165,
    ZetaIconTypePencil                          = 0x177,
    ZetaIconTypeAddressBook                     = 0x187,
    ZetaIconTypeFlashOn                         = 0x193,
    ZetaIconTypeFlashOff                        = 0x194,
    ZetaIconTypeFlashAuto                       = 0x195,
    ZetaIconTypeFullScreen                      = 0x139,
    ZetaIconTypeBrush                           = 0x179,
    ZetaIconTypeUndo                            = 0x116,
    ZetaIconTypeRedo                            = 0x117,
    ZetaIconTypeLocation                        = 0x149,
    
    ZetaIconTypeZetaLogo                        = 0x202,
    ZetaIconTypeLeave                           = 0x205,
    ZetaIconTypeConvMetaAddPerson               = 0x215,
    ZetaIconTypePhone                           = 0x211,
    ZetaIconTypeEndCall                         = 0x222,
    ZetaIconTypeArchive                         = 0x212,
    ZetaIconTypeSave                            = 0x197,
    ZetaIconTypeExport                          = 0x198,
    ZetaIconTypeAudio                           = 0x155,
    ZetaIconTypeMovie                           = 0x146,
    ZetaIconTypeSadMan                          = 0x208,
    ZetaIconTypePlusCircled                     = 0x216,
    ZetaIconTypeCheckmarkCircled                = 0x217,
    ZetaIconTypeGif                             = 0x219,
    ZetaIconTypeLightBulb                       = 0x221,
    ZetaIconTypeVideoCall                       = 0x226,
    ZetaIconTypeVideoMessage                    = 0x227,
    ZetaIconTypeStop                            = 0x228,

    ZetaIconTypeLockLocked                      = 0x175,
    ZetaIconTypeLockUnlocked                    = 0x176,
    
    ZetaIconTypeSearch                          = 0x163,
    ZetaIconTypeCat                             = 0xFF8,
    
    ZetaIconTypePersonMulticolor                = 0x1420,
    ZetaIconTypePhoneMulticolor                 = 0x2110,
    ZetaIconTypeCameraLensMulticolor            = 0x1430,
    ZetaIconTypeBrushMulticolor                 = 0x1790,
    ZetaIconTypePingMulticolor                  = 0x1370,
    ZetaIconTypeVideoMulticolor                 = 0x2260,

    ZetaIconTypeBackArrow                       = 0x110,
    ZetaIconTypeForwardArrow                    = 0x111,
    ZetaIconTypeDownArrow                       = 0x113,
    
    ZetaIconTypeCancel                          = 0x103,
    ZetaIconTypeMediaBarPlay                    = 0x131,
    ZetaIconTypeMediaBarPause                   = 0x132,

    ZetaIconTypeHamburger                       = 0x121,

    ZetaIconTypeCallAudio                       = 0x211,
    ZetaIconTypeCallVideo                       = 0x226,

    ZetaIconTypeGiphy                           = 0x123,
    
    ZetaIconTypeCursorCircle                    = 0x1000,
    ZetaIconTypeContactsCircle                  = 0x1420,
    
    ZetaIconTypeRecordDot                       = 0x229,
    ZetaIconTypeStopRecording                   = 0x230,
    
    ZetaIconTypeLike                            = 0x183,
    ZetaIconTypeLiked                           = 0x184,
    
    ZetaIconTypeEffectBallon                    = 0x240,
    ZetaIconTypeEffectJellyfish                 = 0x242,
    ZetaIconTypeEffectRabbit                    = 0x243,
    ZetaIconTypeEffectChurch                    = 0x244,
    ZetaIconTypeEffectAlien                     = 0x245,
    ZetaIconTypeEffectRobot                     = 0x246,
    ZetaIconTypeEffectReverse                   = 0x247,
};

typedef NS_ENUM(NSInteger, ZetaIconSize) {
    ZetaIconSizeMessageStatus, // 8
    ZetaIconSizeLike, // 12
    ZetaIconSizeSearchBar, // 14
    ZetaIconSizeTiny,   // 16
    ZetaIconSizeSmall,  // 20
    ZetaIconSizeMedium, // 24
    ZetaIconSizeActionButton, // 28
    ZetaIconSizeCamera, // 40
    ZetaIconSizeLarge,   // 48
};
