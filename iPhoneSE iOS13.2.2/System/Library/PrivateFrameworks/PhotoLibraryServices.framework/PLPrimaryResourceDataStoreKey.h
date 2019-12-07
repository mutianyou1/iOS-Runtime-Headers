/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLTaggedPointerDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : NSObject <PLTaggedPointerDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned)strategyFromExternalResource:(id)arg1 asset:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_init;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)uniformTypeIdentifier;
-(id)keyData;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)_initWithKeyStruct:(const void*)arg1 ;
-(id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
@end
