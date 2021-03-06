/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKCharacterEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long character; 
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
+(id)optionWithCharacter:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(unsigned long long)character;
-(long long)swatchStyle;
-(id)_valueToFaceBundleStringDict;
@end

