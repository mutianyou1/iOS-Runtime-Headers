/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject {

	NSMutableDictionary* _sectionHeaderViewLegibilityLabelDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * sectionHeaderViewLegibilityLabelDictionary;              //@synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)clearAll;
-(NSMutableDictionary *)sectionHeaderViewLegibilityLabelDictionary;
-(id)_stringDescriptorForFont:(id)arg1 ;
-(id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2 ;
-(id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3 ;
-(void)setSectionHeaderViewLegibilityLabelDictionary:(NSMutableDictionary *)arg1 ;
@end

