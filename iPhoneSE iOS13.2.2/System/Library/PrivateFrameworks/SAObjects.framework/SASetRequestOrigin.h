/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double verticalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (nonatomic,copy) NSNumber * age; 
@property (assign,nonatomic) double altitude; 
@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (assign,nonatomic) double direction; 
@property (assign,nonatomic) double speed; 
@property (nonatomic,copy) NSString * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setRequestOrigin;
+(id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)status;
-(id)groupIdentifier;
-(double)direction;
-(void)setDirection:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setStatus:(NSString *)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(NSString *)desiredAccuracy;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(double)horizontalAccuracy;
-(void)setAltitude:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)altitude;
-(double)verticalAccuracy;
-(NSNumber *)age;
-(void)setAge:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
