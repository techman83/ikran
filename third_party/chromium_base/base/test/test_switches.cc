// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/test/test_switches.h"

// Time (in milliseconds) for which we wait for live operations to complete.
const char switches::kLiveOperationTimeout[] = "live-operation-timeout";

// Time (in milliseconds) that the tests should wait before timing out.
// TODO(phajdan.jr): Clean up the switch names.
const char switches::kTestLargeTimeout[] = "test-large-timeout";
const char switches::kTestTinyTimeout[] = "test-tiny-timeout";
const char switches::kUiTestActionTimeout[] = "ui-test-action-timeout";
const char switches::kUiTestActionMaxTimeout[] = "ui-test-action-max-timeout";
const char switches::kUiTestCommandExecutionTimeout[] = "ui-test-timeout";
const char switches::kUiTestTerminateTimeout[] = "ui-test-terminate-timeout";
const char switches::kUiTestTimeout[] = "test-timeout";
