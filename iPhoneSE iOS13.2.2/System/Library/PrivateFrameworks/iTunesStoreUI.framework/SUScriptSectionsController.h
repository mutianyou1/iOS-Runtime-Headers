/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections; 
@property (retain) SUScriptSection * selectedSection; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_className;
-(id)sections;
-(SUScriptSection *)selectedSection;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_tabBarConfigurationChangedNotification:(id)arg1 ;
-(id)_copySectionWithIdentifier:(id)arg1 ;
-(id)_fixedSelectedIdentifier;
-(void)_setSelectedIdentifier:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(void)setRootViewController:(id)arg1 forSection:(id)arg2 ;
-(void)setSelectedSection:(SUScriptSection *)arg1 ;
@end

