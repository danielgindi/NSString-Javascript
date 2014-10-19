//
//  NSString+Javascript.h
//  NSString+Javascript
//
//  Created by Daniel Cohen Gindi on 1/5/14.
//  Copyright (c) 2014 Daniel Cohen Gindi. All rights reserved.
//
//  https://github.com/danielgindi/NSString-Javascript
//

#import <Foundation/Foundation.h>

@interface NSString (Javascript)

- (NSString *)stringByEscapingForJavascriptWithDelimiter:(unichar)delimiter wrapWithDelimiters:(BOOL)wrap;

@end
