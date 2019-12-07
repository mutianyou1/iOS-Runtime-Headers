/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteQueryCacheMissLogging.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject <CNAutocompleteQueryCacheMissLogging> {

	NSObject*<OS_os_log> _os_log;

}

@property (readonly) NSObject*<OS_os_log> os_log;                   //@synthesize os_log=_os_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)os_log;
-(void)didReturnCacheFalseNegatives:(id)arg1 ;
-(void)didReturnCacheFalsePositives:(id)arg1 ;
@end
