/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSCache;


@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property (nonatomic,readonly) id<IMAssistantContactsDataSource> contactsDataSource; 
@property (nonatomic,readonly) id<IMAssistantChatDataSource> chatDataSource; 
@property (nonatomic,readonly) id<IMAssistantAccountDataSource> accountDataSource; 
@property (nonatomic,readonly) id<IMLocationManager> locationManagerDataSource; 
@property (nonatomic,readonly) NSCache * handleToContactIdentifierCache; 
@property (nonatomic,readonly) NSCache * spiHandleToPersonCache; 
@property (nonatomic,readonly) NSCache * contactIdentifierToUnifiedContactIdentifierCache; 
@required
-(id<IMAssistantContactsDataSource>)contactsDataSource;
-(id<IMLocationManager>)locationManagerDataSource;
-(id<IMAssistantChatDataSource>)chatDataSource;
-(id<IMAssistantAccountDataSource>)accountDataSource;
-(NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
-(NSCache *)handleToContactIdentifierCache;
-(NSCache *)spiHandleToPersonCache;

@end

