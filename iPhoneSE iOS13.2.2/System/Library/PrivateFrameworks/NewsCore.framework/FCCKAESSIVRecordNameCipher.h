/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCKRecordNameCipher.h>

@interface FCCKAESSIVRecordNameCipher : NSObject <FCCKRecordNameCipher>
-(id)_derivedKeyFromKey:(id)arg1 ;
-(id)_encryptionSalt;
-(id)encryptRecordName:(id)arg1 withKey:(id)arg2 ;
-(id)decryptRecordName:(id)arg1 withKey:(id)arg2 ;
@end

