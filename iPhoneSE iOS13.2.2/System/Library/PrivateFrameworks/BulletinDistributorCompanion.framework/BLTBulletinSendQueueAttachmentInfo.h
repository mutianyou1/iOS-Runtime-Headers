/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BLTBulletinSendQueueAttachmentInfo : NSObject {

	NSURL* _url;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(NSURL *)url;
-(void)setKey:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
@end
