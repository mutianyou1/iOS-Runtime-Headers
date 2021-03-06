/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class SAUIDomainObjectPicker, SADomainObject;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,retain) SADomainObject * selectedItem; 
+(id)domainObjectPickerSelection;
+(id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSelectedItem:(SADomainObject *)arg1 ;
-(SADomainObject *)selectedItem;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAUIDomainObjectPicker *)domainObjectPicker;
-(void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg1 ;
@end

