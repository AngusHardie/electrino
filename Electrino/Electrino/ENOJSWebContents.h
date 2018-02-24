//
//  ENOJSWebContents.h
//  Electrino
//
//  Created by Angus Hardie on 24/02/2018.
//  Copyright © 2018 Lacquer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol ENOJSWebContentsExports <JSExport>

- (void)openDevTools:(id)sender;

@end

@interface ENOJSWebContents : NSObject <ENOJSWebContentsExports>

@end
