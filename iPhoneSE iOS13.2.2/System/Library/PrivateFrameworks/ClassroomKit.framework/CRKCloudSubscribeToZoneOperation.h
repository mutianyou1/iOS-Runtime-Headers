/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CKRecordZoneID;

@interface CRKCloudSubscribeToZoneOperation : CRKCloudEncapsulatedOperation {

	CKRecordZoneID* _zoneId;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneId;              //@synthesize zoneId=_zoneId - In the implementation block
-(void)main;
-(CKRecordZoneID *)zoneId;
-(id)initWithOperationQueue:(id)arg1 database:(id)arg2 ;
-(void)retryableFetchZoneOperationDidFinish:(id)arg1 ;
-(void)retryableModifyRecordZonesOperationDidFinish:(id)arg1 ;
-(void)retryableFetchSubscriptionOperationDidFinish:(id)arg1 ;
-(void)subscribeToZone:(id)arg1 ;
-(void)retryableCreateSubscriptionOperationDidFinish:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 database:(id)arg2 zoneId:(id)arg3 ;
@end
