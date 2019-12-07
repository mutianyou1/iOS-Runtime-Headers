/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsAnalyticsUpload/NewsAnalyticsUpload-Structs.h>
#import <libobjc.A.dylib/NDAnalyticsPayloadInfo.h>
@class NSURL, NSDictionary, NSArray;


@protocol NDAnalyticsPayloadInfo <NSCopying>
@property (nonatomic,copy,readonly) NSURL * endpointURL; 
@property (nonatomic,copy,readonly) NSDictionary * valuesByHTTPHeaderField; 
@property (nonatomic,copy,readonly) NSArray * entriesToUpload; 
@property (nonatomic,copy,readonly) NSDictionary * droppedEntriesByReason; 
@required
-(NSURL *)endpointURL;
-(NSArray *)entriesToUpload;
-(NSDictionary *)droppedEntriesByReason;
-(NSDictionary *)valuesByHTTPHeaderField;

@end


@class NSURL, NSDictionary, NSArray;

@interface NDAnalyticsPayloadInfo : NSObject <NDAnalyticsPayloadInfo> {

	NSURL* _endpointURL;
	NSDictionary* _valuesByHTTPHeaderField;
	NSArray* _entriesToUpload;
	NSDictionary* _droppedEntriesByReason;

}

@property (nonatomic,copy) NSURL * endpointURL;                                 //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy) NSDictionary * valuesByHTTPHeaderField;              //@synthesize valuesByHTTPHeaderField=_valuesByHTTPHeaderField - In the implementation block
@property (nonatomic,copy) NSArray * entriesToUpload;                           //@synthesize entriesToUpload=_entriesToUpload - In the implementation block
@property (nonatomic,copy) NSDictionary * droppedEntriesByReason;               //@synthesize droppedEntriesByReason=_droppedEntriesByReason - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)endpointURL;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(NSArray *)entriesToUpload;
-(NSDictionary *)droppedEntriesByReason;
-(NSDictionary *)valuesByHTTPHeaderField;
-(void)setValuesByHTTPHeaderField:(NSDictionary *)arg1 ;
-(void)setEntriesToUpload:(NSArray *)arg1 ;
-(void)setDroppedEntriesByReason:(NSDictionary *)arg1 ;
@end
