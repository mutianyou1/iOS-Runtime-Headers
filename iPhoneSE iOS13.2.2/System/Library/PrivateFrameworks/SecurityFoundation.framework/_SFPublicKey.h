/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKey.h>

@interface _SFPublicKey : _SFKey {

	id _publicKeyInternal;

}

@property (getter=_secKey,nonatomic,readonly) _SecKey* secKey; 
+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(id)keyData;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(_SecKey*)_secKey;
-(id)initWithSecKey:(_SecKey*)arg1 ;
@end

