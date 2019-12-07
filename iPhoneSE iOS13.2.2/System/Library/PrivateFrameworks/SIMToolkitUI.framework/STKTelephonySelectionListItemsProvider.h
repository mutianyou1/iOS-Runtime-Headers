/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/STKTelephonyListItemsProvider.h>

@class NSString;

@interface STKTelephonySelectionListItemsProvider : NSObject <STKTelephonyListItemsProvider> {

	CTServerConnectionRef _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithConnection:(CTServerConnectionRef)arg1 ;
-(id)selectionListItemsFromOptions:(id)arg1 ;
@end
