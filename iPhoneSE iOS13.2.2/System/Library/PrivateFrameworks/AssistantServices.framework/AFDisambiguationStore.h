/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFManagedStorageConnection;

@interface AFDisambiguationStore : NSObject {

	AFManagedStorageConnection* _store;

}
-(void)reset;
-(id)_store;
-(id)infoForIdentifier:(id)arg1 ;
-(void)saveInfo:(id)arg1 forIdentifier:(id)arg2 ;
@end
