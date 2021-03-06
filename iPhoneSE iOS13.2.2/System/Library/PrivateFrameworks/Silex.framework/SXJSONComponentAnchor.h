/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponentAnchor.h>

@class NSString;

@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long targetAnchorPosition; 
@property (nonatomic,readonly) long long originAnchorPosition; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier; 
@property (nonatomic,readonly) NSRange range; 
-(NSRange)range;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;
-(long long)anchorAlignmentForString:(id)arg1 ;
-(long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
@end

