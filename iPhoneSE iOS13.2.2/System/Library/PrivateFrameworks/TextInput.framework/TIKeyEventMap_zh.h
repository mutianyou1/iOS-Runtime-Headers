/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
+(id)punctuationMap_zh_Hans;
+(id)punctuationMap_zh_Hant;
-(id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4 ;
-(id)punctuationMap;
-(BOOL)isURLOrEmailKeyboardInKeyboardState:(id)arg1 ;
@end
