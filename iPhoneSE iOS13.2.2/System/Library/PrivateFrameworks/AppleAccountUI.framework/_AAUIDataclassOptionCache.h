/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class NSArray, NSDictionary;

@interface _AAUIDataclassOptionCache : NSObject {

	NSDictionary* _dataclassOptions;
	NSArray* _filteredDataclasses;

}

@property (nonatomic,copy) NSDictionary * dataclassOptions;              //@synthesize dataclassOptions=_dataclassOptions - In the implementation block
@property (nonatomic,copy) NSArray * filteredDataclasses;                //@synthesize filteredDataclasses=_filteredDataclasses - In the implementation block
-(id)initWithDataclassOptions:(NSDictionary*)arg1 ;
-(void)setDataclassOptions:(NSDictionary *)arg1 ;
-(NSArray *)filteredDataclasses;
-(NSDictionary *)dataclassOptions;
-(void)setFilteredDataclasses:(NSArray *)arg1 ;
@end
