/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MUPayloadEncryption : NSObject {

	BOOL _keyInitialized;
	BOOL _haveKey;
	unsigned char _key[16];

}
+(id)sharedInstance;
-(id)init;
-(id)decryptData:(id)arg1 ;
-(id)encryptData:(id)arg1 ;
-(void)initializeKey;
@end

