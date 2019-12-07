/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSArray, NSString;

@interface SCWatchlistAddSymbolsCommand : NSObject <SCKZoneCommand> {

	NSArray* _symbols;

}

@property (nonatomic,copy,readonly) NSArray * symbols;              //@synthesize symbols=_symbols - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSymbols:(id)arg1 ;
-(void)executeWithZone:(id)arg1 ;
-(NSArray *)symbols;
@end
