/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(id)init;
-(NSString *)targetURL;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)targetType;
-(void)setTargetType:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)targetIdentifier;
-(id)actionDetails;
-(void)setActionDetails:(id)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
@end

