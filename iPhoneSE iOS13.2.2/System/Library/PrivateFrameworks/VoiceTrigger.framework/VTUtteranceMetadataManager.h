/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtteranceMetadataManager : NSObject
+(BOOL)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(void)_saveMetaVersionFileAtPath:(id)arg1 ;
+(void)_upgradeLocaleDirectoryIfNecessary:(id)arg1 ;
+(BOOL)_audioDirectoryNeedsUpgrade:(id)arg1 ;
+(void)_upgradeUtteranceMeta:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(BOOL)arg2 isHandheldEnrollment:(BOOL)arg3 withBiometricResult:(unsigned long long)arg4 ;
+(void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1 ;
+(void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1 ;
@end
