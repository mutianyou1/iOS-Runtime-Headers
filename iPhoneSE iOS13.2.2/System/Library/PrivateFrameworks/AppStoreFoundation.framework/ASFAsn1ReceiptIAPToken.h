/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASFAsn1Token, NSString;

@interface ASFAsn1ReceiptIAPToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	ASFAsn1Token* mContentToken;

}

@property (readonly) ASFAsn1Token * contentToken; 
@property (readonly) unsigned long long integerValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
+(id)readFromBuffer:(const char*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(NSString *)stringValue;
-(unsigned long long)integerValue;
-(ASFAsn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
@end

