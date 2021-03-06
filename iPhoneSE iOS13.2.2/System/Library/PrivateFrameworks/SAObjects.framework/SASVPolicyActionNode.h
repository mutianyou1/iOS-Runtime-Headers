/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SASVSpeechMetadata;

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSString * confirmationType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SASVSpeechMetadata * speechMetadata; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyActionNode;
+(id)policyActionNodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)confirmationType;
-(void)setConfirmationType:(NSString *)arg1 ;
-(SASVSpeechMetadata *)speechMetadata;
-(void)setSpeechMetadata:(SASVSpeechMetadata *)arg1 ;
@end

