/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject <NSSecureCoding> {

	long long _maximumNumberOfSuggestions;
	_PSEnsembleModel* _suggestionModel;

}

@property (assign,nonatomic) long long maximumNumberOfSuggestions;              //@synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions - In the implementation block
@property (nonatomic,retain) _PSEnsembleModel * suggestionModel;                //@synthesize suggestionModel=_suggestionModel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaximumNumberOfSuggestions:(long long)arg1 ;
-(_PSEnsembleModel *)suggestionModel;
-(long long)maximumNumberOfSuggestions;
-(void)setSuggestionModel:(_PSEnsembleModel *)arg1 ;
@end

